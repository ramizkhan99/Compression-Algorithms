// Macros for current folder
#ifdef _WIN32
#include <direct.h>
#define GetCWD _getcwd
#else
#include <unistd.h>
#define GetCWD getcwd
#endif


#include <iostream>
#include <vector>
#include <filesystem>

#include "TypeHandler.h"

namespace fs = std::filesystem;

int main(int argc, char* argv[])
{
	if ( argc == 1 )
	{
		std::cout << "Invalid arguments\nPlease specify a path or filename";
		exit(1);
	}

	if ( strcmp(argv[1], "--path") == 0 )
	{
		std::cout << "Path: " << argv[2];
		exit(0);
	}

	const fs::path filepath = fs::current_path() / argv[1];

	if ( !fs::exists(filepath) )
	{
		std::cout << "This file does not exist\nPlease try again" << std::endl;
		exit(1);
	}

	TypeHandler typeHandler(filepath);
	typeHandler.ShowInfo();
}
