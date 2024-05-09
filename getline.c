#include "main.h"

/**
 * getline - delimited string input
 * Return: returns pointer to getted input string
 */

char *getline(void)
{
	char *input_buffer = NULL;
	size_t buf_size = 0;
	ssize_t nread;

	nread = getline(&input_buffer, &buf_size, stdin);

	if (nread == -1)
	{
		free(input_buffer);
		exit(0);
	}

	return (input_buffer);
}
