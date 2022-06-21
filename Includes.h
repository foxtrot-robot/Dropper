// Main.h : Defines external libraries for the main file.

#pragma once

#include <iostream>
#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include <urlmon.h>
#include <cstdio>
#include <string>
#include <string.h>
#include <vector>
#include <locale>
#include <codecvt>

// Header files
#include "Config.h"
#include "Dropper.h"

// Macros
#pragma comment(lib, "Urlmon.lib")
#define getURL URLOpenBlockingStreamA

// Using definitions
using std::cout, std::string;