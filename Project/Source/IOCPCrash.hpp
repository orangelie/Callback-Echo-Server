#ifndef ___IOCPCrash___ /*< ___IOCPCrash___ >*/
#define ___IOCPCrash___ /*< ___IOCPCrash___ >*/

#define MESSAGE_MAX_CAPACITY (0x200)

#include <stdio.h> //< printf() | strlen()
#include <conio.h> //< _getch()

#if defined (_WIN64) || (_WIN32) /*< Windows >*/

#include <winsock2.h> //< Ws2_32
#include <windows.h> //< WinAPI


/**
		@namespace mawile
*/
namespace mawile {
	
	/**
			@struct PER_IO_DATA
	*/
	typedef struct {
		WSAOVERLAPPED Overlapped;
		WSABUF wsaBuf;
		SOCKET hSocket;
		SOCKADDR_IN sockAddrIn;
		char Message[MESSAGE_MAX_CAPACITY];
	}PER_IO_DATA, *LPPER_IO_DATA;
	
	
	/**
			@fn Shutdown
			@param (Error Message)
			@brief Shutdown the main module
	*/
	void Shutdown(const wchar_t*);
}


#endif /*< Windows >*/
#endif /*< ___IOCPCrash___ >*/
