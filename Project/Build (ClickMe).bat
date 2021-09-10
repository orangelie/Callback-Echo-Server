cmake --build ./BUILD --config Release
copy ".\\BUILD\\Server.exe" ".\\Executable (Output)\\Server.exe"
copy ".\\BUILD\\Client.exe" ".\\Executable (Output)\\Client.exe"
del ".\\BUILD\\Server.exe"
del ".\\BUILD\\Client.exe"