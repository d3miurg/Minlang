﻿#include <stdio.h>
#include "defs.h"
#include "parser.h"

char memory[1024][2];

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
	while (!feof(file))
	{
		fgets(string, sizeof(string), file);
		printf("%s", string);
	}

	fclose(file);
	return 0;
}
