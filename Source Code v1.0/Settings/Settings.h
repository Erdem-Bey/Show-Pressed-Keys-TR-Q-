#pragma once
#ifndef HANCOPY__SETTINGS_H
#define HANCOPY__SETTINGS_H

#include <stdint.h>
#include <array>
#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <Windows.h>

#include "..\Settings\Program\S_Program.h"
#include "..\Settings\MainWindow\S_MainWindow.h"
#include "..\Settings\SettingsWindow\S_SettingsWindow.h"
#include "..\Settings\UsageWindow\S_UsageWindow.h"
#include "..\Settings\AboutWindow\S_AboutWindow.h"


class Settings
{
	public:
		Settings()					= delete;
		Settings(const Settings &)	= delete;
		~Settings() {};
		
		static const std::wstring				SETTINGS_FILE;					//(std::wstring(L"Settings.ini"));
		static const std::wstring				HEADER_WP__WINDOW_PROPERTIES;	//(std::wstring(L"WindowProperties"));


		static void LoadDefaults();
		static void LoadFromFile();
		static void SaveToFile();


		/*
		// Settings file header and key names.

		static const std::wstring				HEADER_WP__WINDOW_PROPERTIES;	//(std::wstring(L"WindowProperties"));
		static const std::wstring				HEADER_GUI__LAST_USAGE;			//(std::wstring(L"LastUsage"));

		static const std::wstring				KEY_WP__MAIN_X;					//(std::wstring(L"MainWindow_LastPosition_X"));
		static const std::wstring				KEY_WP__MAIN_Y;					//(std::wstring(L"MainWindow_LastPosition_Y"));
		static const std::wstring				KEY_WP__SETTINGS_X;				//(std::wstring(L"SettingsWindow_LastPosition_X"));
		static const std::wstring				KEY_WP__SETTINGS_Y;				//(std::wstring(L"SettingsWindow_LastPosition_Y"));
		static const std::wstring				KEY_WP__ABOUT_X;				//(std::wstring(L"AboutWindow_LastPosition_X"));
		static const std::wstring				KEY_WP__ABOUT_Y;				//(std::wstring(L"AboutWindow_LastPosition_Y"));
		static const std::wstring				KEY_WP__LAST_SELECTED;			//(std::wstring(L"Settings_LastSelectedOptionSet"));

		static const std::wstring				KEY_GUI__LAST_SHUTDOWN_TYPE;	//(std::wstring(L"LastShutdownType"));
		static const std::wstring				KEY_GUI__LAST_SHUTDOWN_MODE;	//(std::wstring(L"LastShutdownMode"));
		static const std::wstring				KEY_GUI__LAST_FORCE;			//(std::wstring(L"LastForceChoice"));
		static const std::wstring				KEY_GUI__LAST_UPDATES;			//(std::wstring(L"LastUpdateChoice"));

		
		static void LoadDefaults();
		static void LoadFromFile();
		static void SaveToFile();*/

		
		typedef Settings_Program		Program;
		typedef Settings_MainWindow		MainWindow;
		typedef Settings_SettingsWindow	SettingsWindow;
		typedef Settings_UsageWindow	UsageWindow;
		typedef Settings_AboutWindow	AboutWindow;

		friend class Settings_MainWindow;
		friend class Settings_SettingsWindow;
		friend class Settings_AboutWindow;
		
		static constexpr int			TXT_WIDTH				= 50;
		static constexpr int			TXT_HEIGHT				= 16;
		static constexpr int			BTN_WIDTH				= 100;
		static constexpr int			BTN_HEIGHT				= 40;
		static constexpr int			ROW_HEIGHT				= 20;
		static constexpr int			ROW_HEIGHT2				= 40;
		static constexpr int			ROW_SPACE				= 10;
		static constexpr int			COL_SPACE				= 10;

		// Unmodifiable data

		/*static const int						MAINWND_W;
		static const int						MAINWND_H;
		static const std::wstring				MAINWND_CLASS;
		static const DWORD						MAINWND_STYLES;
		static const DWORD						MAINWND_EXSTYLES;
		static const DWORD						MAINWND_CLASS_STYLES;
		static const std::wstring				MAINWND_TITLE;

		static const int						SETTWND_W;
		static const int						SETTWND_H;
		static const std::wstring				SETTWND_CLASS;
		static const std::wstring				SETTWND_TITLE;
		static const DWORD						SETTWND_STYLES;
		static const DWORD						SETTWND_EXSTYLES;
		static const DWORD						SETTWND_CLASS_STYLES;

		static const int						ABUTWND_W;
		static const int						ABUTWND_H;
		static const std::wstring				ABUTWND_CLASS;
		static const std::wstring				ABUTWND_TITLE;
		static const DWORD						ABUTWND_STYLES;
		static const DWORD						ABUTWND_EXSTYLES;
		static const DWORD						ABUTWND_CLASS_STYLES;
		
		static const int						TXT_WIDTH				= 50;
		static const int						TXT_HEIGHT				= 16;
		static const int						BTN_WIDTH				= 100;
		static const int						BTN_HEIGHT				= 40;
		static const int						ROW_HEIGHT				= 20;
		static const int						ROW_HEIGHT2				= 40;
		static const int						ROW_SPACE				= 10;
		static const int						COL_SPACE				= 10;

		// Window Positions
		static int								MainWnd_X;
		static int								MainWnd_Y;
		static int								SettWnd_X;
		static int								SettWnd_Y;
		static int								AbutWnd_X;
		static int								AbutWnd_Y;
		static int								Settings_LastSelectedOptionSet;


		enum SHUTDOWN_TYPE
		{
			SHUTDOWN	= 100,
			RESTART		= 200,
			LOGOUT		= 300,
			SLEEP		= 400,
			HIBERNATE	= 500
		};
		static SHUTDOWN_TYPE LastShutdownType;

		enum SHUTDOWN_MODE
		{
			COUNTDOWN	= 100,
			DATETIME	= 200
		};
		static SHUTDOWN_MODE LastShutdownMode;

		static bool LastForceChoice;
		static bool LastUpdateChoice;*/

	private:
		static constexpr wchar_t							QUOTE						= L'\"';
		static constexpr std::array<unsigned char, 3267>	DefaultSettingsFileBytes	= {{ 239, 187, 191, 91, 87, 105, 110, 100, 111, 119, 80, 114, 111, 112, 101, 114, 116, 105, 101, 115, 93, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 76, 97, 115, 116, 80, 111, 115, 105, 116, 105, 111, 110, 95, 88, 9, 9, 9, 9, 9, 9, 61, 32, 49, 49, 55, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 76, 97, 115, 116, 80, 111, 115, 105, 116, 105, 111, 110, 95, 89, 9, 9, 9, 9, 9, 9, 61, 32, 51, 51, 50, 10, 83, 101, 116, 116, 105, 110, 103, 115, 87, 105, 110, 100, 111, 119, 95, 76, 97, 115, 116, 80, 111, 115, 105, 116, 105, 111, 110, 95, 88, 9, 9, 9, 9, 9, 61, 32, 55, 52, 10, 83, 101, 116, 116, 105, 110, 103, 115, 87, 105, 110, 100, 111, 119, 95, 76, 97, 115, 116, 80, 111, 115, 105, 116, 105, 111, 110, 95, 89, 9, 9, 9, 9, 9, 61, 32, 49, 51, 55, 10, 85, 115, 97, 103, 101, 87, 105, 110, 100, 111, 119, 95, 76, 97, 115, 116, 80, 111, 115, 105, 116, 105, 111, 110, 95, 88, 9, 9, 9, 9, 9, 9, 61, 32, 51, 49, 55, 10, 85, 115, 97, 103, 101, 87, 105, 110, 100, 111, 119, 95, 76, 97, 115, 116, 80, 111, 115, 105, 116, 105, 111, 110, 95, 89, 9, 9, 9, 9, 9, 9, 61, 32, 57, 52, 10, 65, 98, 111, 117, 116, 87, 105, 110, 100, 111, 119, 95, 76, 97, 115, 116, 80, 111, 115, 105, 116, 105, 111, 110, 95, 88, 9, 9, 9, 9, 9, 9, 61, 32, 51, 48, 56, 10, 65, 98, 111, 117, 116, 87, 105, 110, 100, 111, 119, 95, 76, 97, 115, 116, 80, 111, 115, 105, 116, 105, 111, 110, 95, 89, 9, 9, 9, 9, 9, 9, 61, 32, 49, 57, 51, 10, 83, 101, 116, 116, 105, 110, 103, 115, 95, 76, 97, 115, 116, 83, 101, 108, 101, 99, 116, 101, 100, 79, 112, 116, 105, 111, 110, 83, 101, 116, 9, 9, 9, 9, 9, 61, 32, 48, 10, 10, 91, 76, 97, 115, 116, 85, 115, 97, 103, 101, 95, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 93, 10, 84, 105, 109, 105, 110, 103, 80, 108, 97, 110, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 34, 67, 111, 117, 110, 116, 100, 111, 119, 110, 34, 10, 84, 101, 114, 109, 105, 110, 97, 116, 105, 111, 110, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 34, 72, 105, 98, 101, 114, 110, 97, 116, 101, 34, 10, 70, 111, 114, 99, 101, 67, 104, 111, 105, 99, 101, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 49, 10, 85, 112, 100, 97, 116, 101, 67, 104, 111, 105, 99, 101, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 48, 10, 67, 111, 117, 110, 116, 100, 111, 119, 110, 95, 83, 101, 99, 111, 110, 100, 115, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 48, 10, 67, 111, 117, 110, 116, 100, 111, 119, 110, 95, 77, 105, 110, 117, 116, 101, 115, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 48, 10, 67, 111, 117, 110, 116, 100, 111, 119, 110, 95, 72, 111, 117, 114, 115, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 49, 10, 67, 111, 117, 110, 116, 100, 111, 119, 110, 95, 68, 97, 121, 115, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 48, 10, 68, 97, 116, 101, 84, 105, 109, 101, 95, 83, 101, 99, 111, 110, 100, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 48, 10, 68, 97, 116, 101, 84, 105, 109, 101, 95, 77, 105, 110, 117, 116, 101, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 48, 10, 68, 97, 116, 101, 84, 105, 109, 101, 95, 72, 111, 117, 114, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 48, 10, 68, 97, 116, 101, 84, 105, 109, 101, 95, 68, 97, 121, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 49, 10, 68, 97, 116, 101, 84, 105, 109, 101, 95, 77, 111, 110, 116, 104, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 49, 10, 68, 97, 116, 101, 84, 105, 109, 101, 95, 89, 101, 97, 114, 9, 9, 9, 9, 9, 9, 9, 9, 9, 61, 32, 50, 48, 53, 48, 10, 10, 91, 67, 111, 108, 111, 114, 115, 93, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 82, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 71, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 66, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 65, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 82, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 71, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 66, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 65, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 82, 9, 9, 9, 61, 32, 49, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 71, 9, 9, 9, 61, 32, 52, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 66, 9, 9, 9, 61, 32, 50, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 65, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 82, 9, 9, 9, 61, 32, 50, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 71, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 66, 9, 9, 9, 61, 32, 52, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 97, 114, 116, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 65, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 82, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 71, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 66, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 65, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 82, 9, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 71, 9, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 66, 9, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 65, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 82, 9, 9, 9, 61, 32, 52, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 71, 9, 9, 9, 61, 32, 49, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 66, 9, 9, 9, 61, 32, 50, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 65, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 82, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 71, 9, 9, 9, 61, 32, 50, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 66, 9, 9, 9, 61, 32, 52, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 66, 117, 116, 116, 111, 110, 95, 83, 116, 111, 112, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 65, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 82, 9, 9, 61, 32, 49, 50, 56, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 71, 9, 9, 61, 32, 49, 50, 56, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 66, 9, 9, 61, 32, 49, 50, 56, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 79, 117, 116, 108, 105, 110, 101, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 65, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 82, 9, 9, 9, 61, 32, 49, 57, 54, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 71, 9, 9, 9, 61, 32, 49, 57, 54, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 66, 9, 9, 9, 61, 32, 49, 57, 54, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 73, 110, 97, 99, 116, 105, 118, 101, 95, 65, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 82, 9, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 71, 9, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 66, 9, 9, 9, 61, 32, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 79, 117, 116, 108, 105, 110, 101, 95, 65, 99, 116, 105, 118, 101, 95, 65, 9, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 80, 97, 115, 115, 101, 100, 95, 82, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 80, 97, 115, 115, 101, 100, 95, 71, 9, 9, 61, 32, 50, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 80, 97, 115, 115, 101, 100, 95, 66, 9, 9, 61, 32, 52, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 80, 97, 115, 115, 101, 100, 95, 65, 9, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 82, 101, 109, 97, 105, 110, 105, 110, 103, 95, 82, 9, 61, 32, 52, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 82, 101, 109, 97, 105, 110, 105, 110, 103, 95, 71, 9, 61, 32, 50, 48, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 82, 101, 109, 97, 105, 110, 105, 110, 103, 95, 66, 9, 61, 32, 50, 53, 53, 10, 77, 97, 105, 110, 87, 105, 110, 100, 111, 119, 95, 80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114, 95, 70, 105, 108, 108, 95, 65, 99, 116, 105, 118, 101, 95, 82, 101, 109, 97, 105, 110, 105, 110, 103, 95, 65, 9, 61, 32, 50, 53, 53, 10, 10 }};

		/*
		static const std::wstring	VALUE_SHUTDOWN;			//	(std::wstring(L"Shutdown"));
		static const std::wstring	VALUE_RESTART;			//	(std::wstring(L"Restart"));
		static const std::wstring	VALUE_LOGOUT;			//	(std::wstring(L"Logout"));
		static const std::wstring	VALUE_SLEEP;			//	(std::wstring(L"Sleep"));
		static const std::wstring	VALUE_HIBERNATE;		//	(std::wstring(L"Hibernate"));

		static const std::wstring	VALUE_COUNTDOWN;		//	(std::wstring(L"Sleep"));
		static const std::wstring	VALUE_DATETIME;			//	(std::wstring(L"Hibernate"));

		static std::wstring			ReturnShutdownType			(		SHUTDOWN_TYPE		ShutdownType);
		static SHUTDOWN_TYPE		ReturnShutdownType			(const	std::wstring	&	ShutdownType);

		static std::wstring			ReturnShutdownMode			(		SHUTDOWN_MODE		ShutdownMode);
		static SHUTDOWN_MODE		ReturnShutdownMode			(const	std::wstring	&	ShutdownMode);*/

		static void					MakeUpperCase				(		std::wstring	&	String);
		static std::wstring			ReturnUpperCase				(const	std::wstring	&	String);

		static void					AddQuotes					(		std::wstring	&	String);
		static std::wstring			ReturnWithQuotes			(const	std::wstring	&	String);

		static void					RemoveQuotes				(		std::wstring	&	String);
		static std::wstring			ReturnWithoutQuotes			(const	std::wstring	&	String);

		inline
		static bool					DoesFileExist				(const	std::wstring	&	FileLocation);

		static void					CreateDefaultSettingsFile	();

};


inline
bool Settings::DoesFileExist(const std::wstring & FileLocation)
{
    std::ifstream FileStream(FileLocation);
    return FileStream.good();
}

#endif // HANCOPY__SETTINGS_H
