// Config.h : Class for the config.

#pragma once

class Config
{
public:
	bool Drop;
	bool Persistence;
	bool RestartPC;
	bool HideConsoleWindow;
	const char* progPath;

	Config()
	{
		Drop = true;
		Persistence = false;
		RestartPC = false;
		HideConsoleWindow = false;
		progPath = "";
	}
};