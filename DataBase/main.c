#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_string_func.h"

int main(int argc, char **argv) {
	char *test = "S 123456 Ivan";
	char **tabTest = parseLine(test);
	printf("%s //%s //%s", tabTest[0], tabTest[1], tabTest[2]);
	while (1);
}