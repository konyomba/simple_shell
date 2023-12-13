#include "shell.h"

void display(const char *input)
{
	write (STDOUT_FILENO, input, strlen(input));
}
