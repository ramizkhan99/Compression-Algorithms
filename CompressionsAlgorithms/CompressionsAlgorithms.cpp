#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	fstream file;
	file.open("test.txt", ios::out | ios::in);
	string contents;
	file >> contents;
	cout << contents << endl;
	contents = "This is the new content";
	file << contents;
	file >> contents;
	cout << contents;
	file.close();
}
