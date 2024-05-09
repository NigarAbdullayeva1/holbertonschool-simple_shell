#include "main.h"

/**
 * slash_checker - check the file nmae that it begins with slash or not
 * @str: str to be checked
 * Return: 0 in success or 1 in failure
 **/
int slash_checker(const char *str)
{
	if (strchr(str, '/') != NULL)
	{
		return (1);
	}
	return (0);
}
