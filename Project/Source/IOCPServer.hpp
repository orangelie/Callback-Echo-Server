#ifndef ___IOCPServer___ /*< ___IOCPServer___ >*/
#define ___IOCPServer___ /*< ___IOCPServer___ >*/

#include "IOCPCrash.hpp" //< IOCPCrash Include

#if defined (_WIN64) || (_WIN32) /*< Windows >*/

#include <winsock2.h> //< Ws2_32
#include <windows.h> //< WinAPI

#include <iostream> //< std::cin | std::cout


/**
		@namespace mawile
*/
namespace mawile {
	
	/**
			@class IOCPServer
	*/
	class IOCPServer{
	public:
		/**
				@fn Initialize
				@param (Server-Port)
				@brief Initialize IOCPServer (Callback)
		*/
		void Initialize(int);
		
		
		/**
				@fn Listen
				@param (Listenable)
				@brief Listening clients
		*/
		void Listen(int);
		
		
		IOCPServer();
		
		
		~IOCPServer();
		
	private:
		LPPER_IO_DATA IoData; //< Socket Address Information
		
	};
	
	/**
			@fn SendRoutine
			@param (Errors, Bytes, Overlapped, Flags)
			@brief WSARecv Callback
	*/
	void __stdcall SendRoutine(DWORD, DWORD, LPWSAOVERLAPPED, DWORD);
	
	/**
			@fn ReceiveRoutine
			@param (Errors, Bytes, Overlapped, Flags)
			@brief WSASend Callback
	*/
	void __stdcall ReceiveRoutine(DWORD, DWORD, LPWSAOVERLAPPED, DWORD);
}

#endif /*< Windows >*/
#endif /*< ___IOCPServer___ >*/
