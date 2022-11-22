#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "dllcore.h"
#include <Windows.h>


// Called when the DLL is loaded.
void load() {
	MessageBox(0, L"DLL Load", L"Loaded", MB_ICONINFORMATION);
}

// Called when the DLL is unloaded.
void unload() {
	MessageBox(0, L"DLL UnLoad", L"Unloaded", MB_ICONINFORMATION);
}

// Called when the DLL is loaded.
void attach() {
	MessageBox(0, L"DLL Attach", L"Attached", MB_ICONINFORMATION);
}

// Called when the DLL is unloaded.
void detach() {
	MessageBox(0, L"DLL Detach", L"Detached", MB_ICONINFORMATION);
}