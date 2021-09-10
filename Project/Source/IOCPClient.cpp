#include "IOCPClient.hpp"

#if defined (_WIN64) || (_WIN32) /*< Windows >*/

namespace mawile {
	void IOCPClient::Initialize(const char* _IpAddress, int _Port){
		WSADATA wsa;
		if(WSAStartup(MAKEWORD(2, 2), &wsa) != 0){
			mawile::Shutdown(L"InWSAStartup");
		}
		
		(this->IoData->hSocket) = WSASocketW(PF_INET, SOCK_STREAM, 0, 0, 0, WSA_FLAG_OVERLAPPED);
		if((this->IoData->hSocket) == INVALID_SOCKET){
			mawile::Shutdown(L"InWSASocket");
		}
		
		SOCKADDR_IN hAddrIn;
		memset(&hAddrIn, 0x00, sizeof(hAddrIn));
		
		hAddrIn.sin_family = AF_INET;
		hAddrIn.sin_port = htons(_Port);
		inet_pton(AF_INET, _IpAddress, &hAddrIn.sin_addr); //< inet_addr(_IpAddress);
		
		memcpy(&(this->IoData->sockAddrIn), &hAddrIn, sizeof(SOCKADDR_IN));
	}
	
	void IOCPClient::Connect(bool _InfiniteConnection){
		char Message[MESSAGE_MAX_CAPACITY];
		
		if(_InfiniteConnection == false){
			if(connect((this->IoData->hSocket), (SOCKADDR*)&(this->IoData->sockAddrIn), sizeof(this->IoData->sockAddrIn)) == SOCKET_ERROR){
				mawile::Shutdown(L"InConnect");
			}
		}
		else{
			while(connect((this->IoData->hSocket), (SOCKADDR*)&(this->IoData->sockAddrIn), sizeof(this->IoData->sockAddrIn)));
		}
		
		while(true){
			std::string tempString;
			RtlSecureZeroMemory(Message, MESSAGE_MAX_CAPACITY); //< Memory Clear
			
			std::getline(std::cin, tempString); //< Input the string with space
			strcpy(Message, tempString.c_str());
			
			int sendSize = send((this->IoData->hSocket), Message, strlen(Message) + 1, 0);
			if(sendSize > 0){
				/**
						@brief Message that Send Bytes
				*/
				std::cout << "SendBytes > " << Message << " > " << strlen(Message) << '\n';
				
				RtlSecureZeroMemory(Message, MESSAGE_MAX_CAPACITY);
				int recvSize = recv((this->IoData->hSocket), Message, MESSAGE_MAX_CAPACITY, 0);
				if(recvSize > 0){
					/**
							@brief Message that Receive Bytes
					*/
					std::cout << "RecvBytes > " << Message << " > " << strlen(Message) << '\n';
				}
			}
		}
	}
	
	IOCPClient::IOCPClient(){
		(this->IoData) = new PER_IO_DATA;
	}
	
	IOCPClient::~IOCPClient(){
		delete (this->IoData);
		WSACleanup();
	}
}

#endif /*< Windows >*/
