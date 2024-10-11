#include <windows.h> 
#include <iostream>
int main()
{
	COORD coord; 
	HANDLE hStdout; 
	
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	
	std::cout << "Enter new screen buffer size." << std::endl; std::cout << "A number of columns: ";
	std::cin >> coord.X;
	std::cout << "A number of rows: ";
	std::cin >> coord.Y;
	
	if (!SetConsoleScreenBufferSize(hStdout, coord))
	{
		std::cout << "Set console screen buffer size failed." << std::endl; return GetLastError();
	}
	return 0;
}