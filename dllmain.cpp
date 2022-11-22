// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "dllcore.cpp"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved ) {
	switch (ul_reason_for_call) {
        // A process is loading the DLL.
        case DLL_PROCESS_ATTACH:
            load();
			
        // A process is creating a new thread.
        case DLL_THREAD_ATTACH:
            attach();

		// A thread exits normally.
        case DLL_THREAD_DETACH:
            detach();

		// A process unloads the DLL.
        case DLL_PROCESS_DETACH:
            unload();
    }
    return TRUE;
}

