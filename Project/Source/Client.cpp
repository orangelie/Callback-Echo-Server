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
