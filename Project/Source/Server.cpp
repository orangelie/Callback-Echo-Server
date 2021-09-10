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
