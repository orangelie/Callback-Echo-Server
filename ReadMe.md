# **IOCP-Echo (Callback)**

+ It is an IOCP-Echo-Server using an CallbackFunction Network Model.
+ Callback 関数 ネットワークモデルを利用したIOCP エコサーバーです。
+ Callback함수 네트워크 모델을 이용한 IOCP 에코서버입니다.

<br></br>
## **メイン入出力構造体**

```cpp
/**
		@struct PER_IO_DATA
*/
typedef struct {
	WSAOVERLAPPED Overlapped;
	WSABUF wsaBuf;
	SOCKET hSocket;
	SOCKADDR_IN sockAddrIn;
	char Message[0x200];
}PER_IO_DATA, *LPPER_IO_DATA;
```

<br></br>
## **Available References**

```cpp

/**
		@param (Server-IPAddress, Sever-Port)
*/
void  mawile::IOCPClient::Initialize(const char*, int);


/**
		@param (Continuous connection until connection to the server is reached)
*/
void mawile::IOCPClient::Connect(bool);


/**
		@param (Server-Port)
*/
void mawile::IOCPServer::Initialize(int);


/**
		@param (Client infinite listenability)
*/
void mawile::IOCPServer::Listen(bool);

```

<br></br>
## **IOCPServerMain.cpp**
```cpp
#include "IOCPServer.hpp"
#include "IOCPCrash.hpp"

int main(int argc, CHAR** argv){
#if defined (__linux__)  /*< Linux >*/
	mawile::Shutdown(L"It is not Windows");
#else  /*< Windows >*/
	
	mawile::IOCPServer* IOCPServer = new mawile::IOCPServer;
	
	IOCPServer->Initialize(3500);
	IOCPServer->Listen(5);
	
	delete IOCPServer;
	
#endif
}
```

<br></br>
## **IOCPClientMain.cpp**
```cpp
#include "IOCPClient.hpp"
#include "IOCPCrash.hpp"

int main(int argc, CHAR** argv){
#if defined (__linux__)  /*< Linux >*/
	mawile::Shutdown(L"It is not Windows");
#else  /*< Windows >*/
	
	mawile::IOCPClient* IOCPClient = new mawile::IOCPClient;
	
	IOCPClient->Initialize("127.0.0.1", 3500);
	IOCPClient->Connect(false);
	
	delete IOCPClient;
	
#endif
}
```

<br></br>
## **Notes**
+ Compiler > MINGW, cmakefile
+ c++17

<br></br>
# **Pictures**

![](https://github.com/Mawi1e/IOCP-Echo/blob/main/Pictures/1_1.PNG)
![](https://github.com/Mawi1e/IOCP-Echo/blob/main/Pictures/1_2.PNG)
![](https://github.com/Mawi1e/IOCP-Echo/blob/main/Pictures/1_3.PNG)