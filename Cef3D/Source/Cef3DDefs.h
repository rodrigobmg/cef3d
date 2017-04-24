//----------------------------------------------------------------------------
// Cef3D
// Copyright (C) 2017 arkenthera
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// https://github.com/arkenthera/cef3d
// Cef3D.h
// Date: 13.04.2017
//---------------------------------------------------------------------------

#pragma once

namespace Cef3D
{
	enum CefProcessType
	{
		ProcessBrowser,
		ProcessRenderer,
		ProcessOther
	};

	enum Cef3DLogLevel
	{
		Default,
		Verbose,
		Info,
		Warning,
		Error,
		None
	};

	enum Cef3DBrowserType
	{
		Offscreen,
		Normal
	};

	enum Cef3DOsrRenderType
	{
		View,
		Popup
	};

	struct Cef3DDefinition
	{
		Cef3DDefinition();

		Cef3DLogLevel LogLevel;
		std::string LogPath;
		std::string ChildProcessPath;
		std::string UserAgent;
		std::list<std::string> CmdSwitches;

		bool UseChildProcess;
	};

	struct Cef3DBrowserDefinition
	{
		Cef3DBrowserDefinition();

		int Width;
		int Height;
		Cef3DBrowserType Type;

		class Cef3DOsrDel* PaintDelegate;
	};

	struct Cef3DOSRSettings
	{
		bool Transparent;
		bool ShowUpdateRects;
	};
}