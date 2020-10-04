// Macros for current folder
#ifndef WINDOWS
#include <direct.h>
#define GetCWD _getcwd
#else
#include <unistd.h>
#define GetCWD getcwd
#endif

#include <iostream>
#include <vector>
#include <fstream>

#include "TypeHandler.h"

int main(int argc, char* argv[])
{
	if ( argc == 1 )
	{
		std::cout << "Invalid arguments\nPlease specify a path";
		exit(1);
	}

	if ( strcmp(argv[1], "--path") == 0 )
	{
		std::cout << "Path: " << argv[2];
		exit(0);
	}

	char cwd[FILENAME_MAX];
	GetCWD(cwd, FILENAME_MAX);
	std::string current_working_dir(cwd);
	std::string filename(argv[2]);

	TypeHandler typeHandler(current_working_dir, filename);
}
