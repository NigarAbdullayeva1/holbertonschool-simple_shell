#include "main.h"

/**
 * getline - delimited string input
 * Return: returns pointer to getted input string
 */

char *getline(void)
{
	char *input_buffer;
	size_t buf_size;
	ssize_t nread;

	input_buffer = NULL;
	buf_size = 0;
	nread = getline(&input_buffer, &buf_size, stdin);

	if (nread == -1)
	{
		free(input_buffer);
		exit(0);
	}

	return (input_buffer);
}
