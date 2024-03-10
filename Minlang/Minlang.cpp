#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <list>
#include "parser.h"

using namespace std;
int lines_count = 0;

map<unsigned, string> all_lines = {};

map<string, string> command_memory;
map<string, string> data_memory;
map<string, string> function_memory;

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
	int lines_count = 0;
	while (getline(file, line))
	{
		all_lines[lines_count] = line;
		lines_count++;
	}

	for (int j = 0; j < lines_count; j++)
	{
		cout << all_lines[j] << endl;
	}

	file.close();
	return 0;
}
