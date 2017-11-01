#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_string_func.h"

#ifndef TEST

int main(int argc, char **argv) {
	char *test = "S 123456 Ivan";
	char *test2 = "C 134892 Math 3";
	char **tabTest = parseLine(test);
	char **tabTest2 = parseLine(test2);
	printf("%s //%s //%s\n", tabTest[0], tabTest[1], tabTest[2]);

	printf("%s //%s //%s //%s\n", tabTest2[0], tabTest2[1], tabTest2[2], tabTest2[3]);
	while (1);
}

#endif // !TEST