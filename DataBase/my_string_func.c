#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_string_func.h"

int readline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

char ** parseLine(char line[]) {
	char **tabStr;
	switch (line[0])
	{
	case 'S': case 'T': case 'E': case 'A':
		
		tabStr = (char **)malloc(3 * sizeof(char *));
		tabStr[0] = (char *)malloc(2 * sizeof(char));
		tabStr[1] = (char *)malloc(11 * sizeof(char));
		tabStr[2] = (char *)malloc(21 * sizeof(char));
		sscanf_s(line, "%s %s %s", tabStr[0], (unsigned)_countof(tabStr[0]), tabStr[1], (unsigned)_countof(tabStr[1]), tabStr[2], (unsigned)_countof(tabStr[2]));
		printf("%s\n", tabStr[1]);
		break;
	case 'C':
		tabStr = (char **)malloc(4 * sizeof(char *));
		tabStr[0] = (char *)malloc(2 * sizeof(char));
		tabStr[1] = (char *)malloc(11 * sizeof(char));
		tabStr[2] = (char *)malloc(21 * sizeof(char));
		tabStr[3] = (char *)malloc(4 * sizeof(char));
		sscanf_s(line, "%s %s %s %s", tabStr[0], (unsigned)_countof(tabStr[0]),tabStr[1], (unsigned)_countof(tabStr[1]),tabStr[2], (unsigned)_countof(tabStr[2]), tabStr[3], (unsigned)_countof(tabStr[3]));
		break;
	default:
		return NULL;
			break;
	}
	return tabStr;
}
