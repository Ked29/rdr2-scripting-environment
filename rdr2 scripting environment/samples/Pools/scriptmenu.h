/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

#include "script.h"
#include "keyboard.h"

#include <windows.h>
#include <vector>
#include <string>
#include <chrono>


using namespace std;

class MenuBase;
class MenuController;

struct ColorRgba
{
	byte	r, g, b, a;
};

enum eMenuItemClass
{
	Base,
	Title,
	ListTitle,
	Default,
	Switchable,
	Menu
};

class MenuItemBase
{
	float		m_lineWidth;
	float		m_lineHeight;
	float		m_textLeft;
	ColorRgba	m_colorRect;
	ColorRgba	m_colorText;
	ColorRgba	m_colorRectActive;
	ColorRgba	m_colorTextActive;

	MenuBase* m_menu;
protected:
	MenuItemBase(
		float lineWidth, float lineHeight, float textLeft,
		ColorRgba colorRect, ColorRgba colorText,
		ColorRgba colorRectActive = {}, ColorRgba colorTextActive = {})
		: m_lineWidth(lineWidth), m_lineHeight(lineHeight), m_textLeft(textLeft),
		m_colorRect(colorRect), m_colorText(colorText),
		m_colorRectActive(colorRectActive), m_colorTextActive(colorTextActive) {}
	void WaitAndDraw(int ms);
	void SetStatusText(string text, int ms = 2500);
public:
	virtual ~MenuItemBase() {}

	virtual eMenuItemClass GetClass() { return eMenuItemClass::Base; }
	virtual void OnDraw(float lineTop, float lineLeft, bool active);
	virtual	void OnSelect() {}
	virtual	void OnFrame() {}
	virtual	string GetCaption() { return ""; }

	float GetLineWidth() { return m_lineWidth; }
	float GetLineHeight() { return m_lineHeight; }

	ColorRgba GetColorRect() { return m_colorRect; }
	ColorRgba GetColorText() { return m_colorText; }

	ColorRgba GetColorRectActive() { return m_colorRectActive; }
	ColorRgba GetColorTextActive() { return m_colorTextActive; }

	void SetMenu(MenuBase* menu) { m_menu = menu; };
	MenuBase* GetMenu() { return m_menu; };
};

const float
MenuItemTitle_lineWidth = 0.22f,
MenuItemTitle_lineHeight = 0.06f,
MenuItemTitle_textLeft = 0.01f;

const ColorRgba
MenuItemTitle_colorRect{ 0, 0, 0, 255 },
MenuItemTitle_colorText{ 255, 255, 255, 255 };

class MenuItemTitle : public MenuItemBase
{
	string		m_caption;
public:
	MenuItemTitle(string caption)
		: MenuItemBase(
			MenuItemTitle_lineWidth, MenuItemTitle_lineHeight, MenuItemTitle_textLeft,
			MenuItemTitle_colorRect, MenuItemTitle_colorText
		),
		m_caption(caption) {}
	virtual eMenuItemClass GetClass() { return eMenuItemClass::Title; }
	virtual	string GetCaption() { return m_caption; }
};

class MenuItemListTitle : public MenuItemTitle
{
	int		m_currentItemIndex;
	int		m_itemsTotal;
public:
	MenuItemListTitle(string caption)
		: MenuItemTitle(caption),
		m_currentItemIndex(0), m_itemsTotal(0) {}
	virtual eMenuItemClass GetClass() { return eMenuItemClass::ListTitle; }
	virtual	string GetCaption() { return MenuItemTitle::GetCaption() + "  " + to_string(m_currentItemIndex) + "/" + to_string(m_itemsTotal); }
	void SetCurrentItemInfo(int index, int total) { m_currentItemIndex = index, m_itemsTotal = total; }
};

const float
MenuItemDefault_lineWidth = 0.22f,
MenuItemDefault_lineHeight = 0.05f,
MenuItemDefault_textLeft = 0.01f;

const ColorRgba
MenuItemDefault_colorRect{ 70, 95, 95, 150 },
MenuItemDefault_colorText{ 255, 255, 255, 150 },
MenuItemDefault_colorRectActive{ 218, 242, 216, 200 },
MenuItemDefault_colorTextActive{ 0, 0, 0, 200 };

class MenuItemDefault : public MenuItemBase
{
	string		m_caption;
public:
	MenuItemDefault(string caption)
		: MenuItemBase(
			MenuItemDefault_lineWidth, MenuItemDefault_lineHeight, MenuItemDefault_textLeft,
			MenuItemDefault_colorRect, MenuItemDefault_colorText, MenuItemDefault_colorRectActive, MenuItemDefault_colorTextActive
		),
		m_caption(caption) {}
	virtual eMenuItemClass GetClass() { return eMenuItemClass::Default; }
	virtual	string GetCaption() { return m_caption; }
};

class MenuItemSwitchable : public MenuItemDefault
{
	bool	m_state;
public:
	MenuItemSwitchable(string caption)
		: MenuItemDefault(caption),
		m_state(false) {}
	virtual eMenuItemClass GetClass() { return eMenuItemClass::Switchable; }
	virtual void OnDraw(float lineTop, float lineLeft, bool active);
	virtual void OnSelect() { m_state = !m_state; }
	void SetState(bool state) { m_state = state; }
	bool GetState() { return m_state; }
};

class MenuItemMenu : public MenuItemDefault
{
	MenuBase* m_menu;
public:
	MenuItemMenu(string caption, MenuBase* menu)
		: MenuItemDefault(caption),
		m_menu(menu) {}
	virtual eMenuItemClass GetClass() { return eMenuItemClass::Menu; }
	virtual void OnDraw(float lineTop, float lineLeft, bool active);
	virtual	void OnSelect();
};

const int
MenuBase_linesPerScreen = 11;

const float
MenuBase_menuTop = 0.05f,
MenuBase_menuLeft = 0.0f,
MenuBase_lineOverlap = 1.0f / 40.0f;

class MenuBase
{
	MenuItemTitle* m_itemTitle;
	vector<MenuItemBase*>		m_items;

	int		m_activeLineIndex;
	int		m_activeScreenIndex;

	MenuController* m_controller;
public:
	MenuBase(MenuItemTitle* itemTitle)
		: m_itemTitle(itemTitle),
		m_activeLineIndex(0), m_activeScreenIndex(0) {}
	~MenuBase()
	{
		for each (auto item in m_items)
			delete item;
	}
	void AddItem(MenuItemBase* item) { item->SetMenu(this); m_items.push_back(item); }
	int GetActiveItemIndex() { return m_activeScreenIndex * MenuBase_linesPerScreen + m_activeLineIndex; }
	void OnDraw();
	int OnInput();
	void OnFrame()
	{
		for (size_t i = 0; i < m_items.size(); i++)
			m_items[i]->OnFrame();
	}
	void SetController(MenuController* controller) { m_controller = controller; }
	MenuController* GetController() { return m_controller; }
};

struct MenuInputButtonState
{
	bool a, b, up, down, l, r;
};

class MenuInput
{
public:
	static bool MenuSwitchPressed()
	{
		return IsKeyJustUp(VK_F5);
	}
	static MenuInputButtonState GetButtonState()
	{
		return {
			IsKeyDown(VK_NUMPAD5) || (IsKeyDownLong(VK_CONTROL) && IsKeyDown(VK_RETURN)),
			IsKeyDown(VK_NUMPAD0) || MenuSwitchPressed() || IsKeyDown(VK_BACK),
			IsKeyDown(VK_NUMPAD8) || (IsKeyDownLong(VK_CONTROL) && IsKeyDown(VK_UP)),
			IsKeyDown(VK_NUMPAD2) || (IsKeyDownLong(VK_CONTROL) && IsKeyDown(VK_DOWN)),
			IsKeyDown(VK_NUMPAD6) || (IsKeyDownLong(VK_CONTROL) && IsKeyDown(VK_RIGHT)),
			IsKeyDown(VK_NUMPAD4) || (IsKeyDownLong(VK_CONTROL) && IsKeyDown(VK_LEFT))
		};
	}
	static void MenuInputBeep()
	{
		
	}
};


class MenuController
{
	vector<MenuBase*>		m_menuList;
	vector<MenuBase*>		m_menuStack;

	DWORD	m_inputTurnOnTime;

	string	m_statusText;
	DWORD	m_statusTextMaxTicks;

	void InputWait(int ms) { m_inputTurnOnTime = GetTickCount() + ms; }
	bool InputIsOnWait() { return m_inputTurnOnTime > GetTickCount(); }
	MenuBase* GetActiveMenu() { return m_menuStack.size() ? m_menuStack[m_menuStack.size() - 1] : NULL; }
	void DrawStatusText();
	void OnDraw()
	{
		if (auto menu = GetActiveMenu())
			menu->OnDraw();
		DrawStatusText();
	}
	void OnInput()
	{
		if (InputIsOnWait())
			return;
		if (auto menu = GetActiveMenu())
			if (int waitTime = menu->OnInput())
				InputWait(waitTime);
	}
	void OnFrame()
	{
		for (auto i = 0; i < m_menuList.size(); i++)
			m_menuList[i]->OnFrame();
	}
public:
	MenuController()
		: m_inputTurnOnTime(0), m_statusTextMaxTicks(0) {}
	~MenuController()
	{
		for each (auto menu in m_menuList)
			delete menu;
	}
	bool HasActiveMenu() { return m_menuStack.size() > 0; }
	void PushMenu(MenuBase* menu) { if (IsMenuRegistered(menu)) m_menuStack.push_back(menu); }
	void PopMenu() { if (m_menuStack.size()) m_menuStack.pop_back(); }
	void SetStatusText(string text, int ms) { m_statusText = text, m_statusTextMaxTicks = GetTickCount() + ms; }
	bool IsMenuRegistered(MenuBase* menu)
	{
		for (size_t i = 0; i < m_menuList.size(); i++)
			if (m_menuList[i] == menu)
				return true;
		return false;
	}
	void RegisterMenu(MenuBase* menu)
	{
		if (!IsMenuRegistered(menu))
		{
			menu->SetController(this);
			m_menuList.push_back(menu);
		}
	}
	void Update()
	{
		OnDraw();
		OnInput();
		OnFrame();
	}
};

