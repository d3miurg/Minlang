#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <list>
#include "parser.h"

using namespace std;

list<string> all_lines = {};

map<string, string> command_memory;
map<string, unsigned[]> data_memory;

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
		all_lines.push_back(line);
	}

	for (string n : all_lines)
	{
		cout << n << endl;
	}

	file.close();
	return 0;
}
