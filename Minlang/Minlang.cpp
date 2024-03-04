#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "parser.h"

using namespace std;

map<string, unsigned> memory;

int main(int argcount, char *args[]) 
{
	if (args[1] == NULL)
	{
		cout << "No file given" << endl;
		return 0;
	}

	ifstream file(args[1]);
	if (!file.is_open())
	{
		cout << "File does not exist" << endl;
		return 0;
	}

	string line;
	while (getline(file, line))
	{
		cout << line << endl;

		parse_command(&line, memory);
	}

	file.close();
	return 0;
}
