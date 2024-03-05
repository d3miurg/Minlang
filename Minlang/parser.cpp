#include <iostream>
#include <map>

using namespace std;

string trim_command(string *command, int command_lenght)
{
	string value = *command;
	value.erase(0, command_lenght);
	value.erase(value.length() - 1, value.length());
	*command = value;
}

void parse_command(string *command_line, map<string, unsigned> memory) 
{	
	string command = *command_line;
	if (command.starts_with("new_name"))
	{
		trim_command(&command, 9);
		cout << command << endl;
	}
}