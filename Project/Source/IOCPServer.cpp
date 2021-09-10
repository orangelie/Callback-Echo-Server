#include "IOCPServer.hpp"

#if defined (_WIN64) || (_WIN32) /*< Windows >*/

namespace mawile {
	void IOCPServer::Initialize(int _Port){
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
		hAddrIn.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
		hAddrIn.sin_port = htons(_Port);
		
		memcpy(&(this->IoData->sockAddrIn), &hAddrIn, sizeof(SOCKADDR_IN));
	}
	
	void IOCPServer::Listen(int _Listenable){
		DWORD Flag;
		
		if(bind((this->IoData->hSocket), (SOCKADDR*)&(this->IoData->sockAddrIn), sizeof((this->IoData->sockAddrIn))) == SOCKET_ERROR){
			mawile::Shutdown(L"InBind");
		}
		
		if(listen((this->IoData->hSocket), _Listenable) == SOCKET_ERROR){
			mawile::Shutdown(L"InListen");
		}
		
		while(true){
			LPPER_IO_DATA TempIoData = new PER_IO_DATA;
			SOCKADDR_IN haddrIn;
			int haddrSize = sizeof(haddrIn);
			SOCKET acceptSocket = accept((this->IoData->hSocket), (SOCKADDR*)&haddrIn, &haddrSize);
			if(acceptSocket == INVALID_SOCKET){
				mawile::Shutdown(L"InAccept");
			}
			
			TempIoData->hSocket = acceptSocket;
			TempIoData->wsaBuf.buf = TempIoData->Message;
			TempIoData->wsaBuf.len = MESSAGE_MAX_CAPACITY;
			memset(&TempIoData->Overlapped, 0x00, sizeof(WSAOVERLAPPED));
			memcpy(&(TempIoData->sockAddrIn), &haddrIn, sizeof(SOCKADDR_IN));
			Flag = 0x00;
			
			/**
					@brief Client Connection Point
			*/
			std::cout << "[+] Client Connection.\n";
			
			if(WSARecv(TempIoData->hSocket, &TempIoData->wsaBuf, 1, 0, &Flag, &TempIoData->Overlapped, SendRoutine)){
				if(WSAGetLastError() != WSA_IO_PENDING){
					mawile::Shutdown(L"InWSARecv");
				}
			}
		}
	}
	
	IOCPServer::IOCPServer(){
		(this->IoData) = new PER_IO_DATA;
	}
	
	IOCPServer::~IOCPServer(){
		delete (this->IoData);
		WSACleanup();
	}
	
	void __stdcall SendRoutine(DWORD Error, DWORD dataBytes, LPWSAOVERLAPPED Overlapped, DWORD Flag){
		LPPER_IO_DATA IoData = (LPPER_IO_DATA)Overlapped;
		
		memset(&IoData->Overlapped, 0x00, sizeof(WSAOVERLAPPED));
		
		if(dataBytes == 0){
			/**
					@brief Client Disconnection Point
			*/
			std::cout << "[-] Client Disconnection.\n";
			
			closesocket(IoData->hSocket);
			delete IoData;
			return;
		}
		
		IoData->wsaBuf.buf = IoData->Message;
		IoData->wsaBuf.len = dataBytes;
		
		/**
				@brief Message that Receive Bytes
		*/
		std::cout << "RecvBytes > " << IoData->Message << " > " << dataBytes - 1 <<  '\n';
		
		if(WSASend(IoData->hSocket, &IoData->wsaBuf, 1, 0, 0, &IoData->Overlapped, ReceiveRoutine)){
			if(WSAGetLastError() != WSA_IO_PENDING){
				mawile::Shutdown(L"InWSASend");
			}
		}
	}
	
	void __stdcall ReceiveRoutine(DWORD Error, DWORD dataBytes, LPWSAOVERLAPPED Overlapped, DWORD Flag){
		LPPER_IO_DATA IoData = (LPPER_IO_DATA)Overlapped;
		DWORD RecvFlag = 0x00;
		
		memset(&IoData->Overlapped, 0x00, sizeof(WSAOVERLAPPED));
		
		if(dataBytes == 0){
			/**
					@brief Client Disconnection Point
			*/
			std::cout << "[-] Client Disconnection.\n";
			
			closesocket(IoData->hSocket);
			delete IoData;
			return;
		}
		
		IoData->wsaBuf.buf = IoData->Message;
		IoData->wsaBuf.len = MESSAGE_MAX_CAPACITY;
		
		/**
				@brief Message that Send Bytes
		*/
		std::cout << "SendBytes > " << IoData->Message << " > " << strlen(IoData->Message) <<  '\n';
		
		if(WSARecv(IoData->hSocket, &IoData->wsaBuf, 1, 0, &RecvFlag, &IoData->Overlapped, SendRoutine)){
			if(WSAGetLastError() != WSA_IO_PENDING){
				mawile::Shutdown(L"InWSARecv");
			}
		}
	}
}

#endif /*< Windows >*/
