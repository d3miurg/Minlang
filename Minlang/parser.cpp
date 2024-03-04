#include <iostream>
#include <map>

using namespace std;

void parse_command(string *command_line, map<string, unsigned> memory) 
{	
	string value = *command_line;
	cout << value << endl;
	if (value.starts_with("new_name"))
	{
		cout << "MATCH" << endl;
	}
}