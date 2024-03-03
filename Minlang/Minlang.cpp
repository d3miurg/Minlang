﻿// Minlang.cpp: определяет точку входа для приложения.
//

#include <stdio.h>
#include "defs.h"


int main(int argcount, char *args[]) 
{
	if (args[1] == NULL)
	{
		printf("No file given");
		return 0;
	}



	FILE* file;
	file = fopen(args[1], "r");
	if (file == NULL)
	{
		printf("File does not exist");
		return 0;
	}

	bool end_flag = false;
	char string[40];
	while (!end_flag)
	{
		fgets(string, sizeof(string), file);
		printf("%s", string);
		if (check_string_start(string, (char *)"end"))
		{
			end_flag = true;
		}
	}

	fclose(file);
	return 0;
}
