#include "defs.h"
#include <stdio.h>

int count_len(char string[])
{
	int i = 0;
	while (string[i] != NULL)
	{
		i++;
	}
	return i;
}

bool compare_strings(char string1[], char string2[])
{
	int string1_len = count_len(string1);
	int string2_len = count_len(string2);
	int reference = 0;

	if (string1_len != string2_len)
	{
		return false;
	}
	
	reference = string1_len;
	
	for (int i = 0; i < reference; i++)
	{
		if (string1[i] != string2[i])
		{
			return false;
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
	int string_len = count_len(string);
	int end_len = count_len(end);
	int delta_len = string_len - end_len;
	int i = end_len;
	while (i != -1)
	{
		if (string[i + delta_len] != end[i])
		{
			return false;
		}
		i--;
	}

	return true;
}

void trim_command(char string[])
{
	int string_len = count_len(string);

	for (int i = 0; i < string_len; i++)
	{
		if (string[i] == '(')
		{
			break;
		}
		string[i] = (char)"";
	}
}