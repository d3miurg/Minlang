#include <iostream>
#include <map>

using namespace std;

string trim_command(string command, int command_lenght)
{
	command.erase(0, command_lenght);
	command.erase(command.length() - 1, command.length());
	return command;
}

void parse_command(string *command_line, map<string, unsigned> memory) 
{	
	string command = *command_line;
	if (command.starts_with("new_name"))
	{
		command = trim_command(command, 9);
		cout << command << endl;
	}
}