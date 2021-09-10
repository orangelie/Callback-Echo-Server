#ifndef ___IOCPClient___ /*< ___IOCPClient___ >*/
#define ___IOCPClient___ /*< ___IOCPClient___ >*/

#include "IOCPCrash.hpp" //< IOCPCrash Include

#if defined (_WIN64) || (_WIN32) /*< Windows >*/

#include <winsock2.h> //< Ws2_32
#include <ws2tcpip.h> //< inet_pton()
#include <windows.h> //< WinAPI

#include <iostream> //< std::cin | std::cout
#include <string> //< getline()


/**
		@namespace mawile
*/
namespace mawile{
	
	/**
			@class IOCPClient
	*/
	class IOCPClient{
	public:
		/**
				@fn Initialize
				@param (Server-IpAddress, Server-Port)
				@brief Initialize IOCPClient (Callback)
		*/
		void Initialize(const char*, int);
		
		
		/**
				@fn Initialize
				@param (Infinite Connection)
				@brief Connect to the server
		*/
		void Connect(bool);
		
		
		IOCPClient();
		
		
		~IOCPClient();
		
	private:
		LPPER_IO_DATA IoData; //< Socket Address Information
		
	};
}


#endif /*< Windows >*/
#endif /*< ___IOCPClient___ >*/
