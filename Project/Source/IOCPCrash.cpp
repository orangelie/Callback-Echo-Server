#include "IOCPCrash.hpp"

namespace mawile {
	void Shutdown(const wchar_t* ErrorMsg){
#if defined (_WIN64) || (_WIN32) /*< Windows >*/
		MessageBoxW(0, ErrorMsg, L"##IOCPCrash##", MB_OK);
#else /*< Linux >*/
		wprintf(L"##IOCPCrash##\n> %s", ErrorMsg);
#endif
		exit(1);
	}
}

