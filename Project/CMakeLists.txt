cmake_minimum_required (VERSION 3.11)


project (
  IOCP_Echo_Callback
  VERSION 0.1.0.0
  DESCRIPTION "IOCP Echo Callback"
  LANGUAGES CXX)


add_executable (Server ./Source/Server.cpp ./Source/IOCPServer.cpp ./Source/IOCPCrash.cpp)
target_link_libraries (Server PUBLIC
  "-Wl,-Bstatic,--whole-archive"
  "-lwinpthread"
  "-Wl,--no-whole-archive"
  "-static-libgcc"
  "-static-libstdc++"
  "-static"
  "-lwsock32"
  "-lws2_32"
  "-std=c++17"
)


add_executable (Client ./Source/Client.cpp ./Source/IOCPClient.cpp ./Source/IOCPCrash.cpp)
target_link_libraries (Client PUBLIC
  "-Wl,-Bstatic,--whole-archive"
  "-lwinpthread"
  "-Wl,--no-whole-archive"
  "-static-libgcc"
  "-static-libstdc++"
  "-static"
  "-lwsock32"
  "-lws2_32"
  "-std=c++17"
)