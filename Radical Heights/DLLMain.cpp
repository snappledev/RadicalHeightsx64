#include <Windows.h>
#include "Hooks.h"
#include <string>
DWORD WINAPI Thread(LPVOID reserved)
{
	MessageBoxA(NULL, "Injection Successful", "RADICAL HEIGHTS", MB_ICONINFORMATION);
	Hooks.Initialize();
	MessageBoxA(NULL, "", "RADICAL HEIGHTS", MB_ICONINFORMATION);
	return 0;
}
BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
		CreateThread(0, 0, Thread, 0, 0, 0);
	if (reason == DLL_PROCESS_DETACH)
		return FALSE;
	return TRUE;
}