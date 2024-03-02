﻿// Minlang.cpp: определяет точку входа для приложения.
//

#include "Minlang.h"
#include <stdio.h>

bool compare_strings(char string1[], char string2[], int first_to_compare)
{
	for (int i = 0; i < first_to_compare; i++)
	{
		if (string1[i] != string2[i])
		{
			return false;
		}
		else if (string1[i] == NULL)
		{
			return true;
		}
		else if (string2[i] == NULL)
		{
			return true;
		}
	}
	return true;
}

bool check_string_start(char string[], char start[])
{	
	int i = 0;
	while (start[i] != NULL)
	{
		if (string[i] != start[i])
		{
			return false;
		}
		i++;
	}
	
	return true;
}

bool check_string_end(char string[], char end[])
{
	return false;
}

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
