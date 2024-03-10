#include <iostream>
#include <map>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;

void trim_command(string *command)
{
	string value = *command;
	
	while (value[0] != '(')
	{
		value.erase(0, 1);
	}
	value.erase(0, 1);
	value.erase(value.length() - 1, value.length());
	*command = value;
}

void parse_command(string *command_line, map<string, string> memory) 
{	
	string command = *command_line;
	if (command.starts_with("new_name"))
	{
		trim_command(&command);
		cout << command << endl;
	}
}