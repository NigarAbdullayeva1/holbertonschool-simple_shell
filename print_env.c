#include "main.h"
/**
 *print_env - prints all environment variables
 */
void print_env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		if (environ[i][len] == 0)
		{
			return (&environ[i][len + 1]);
		}
		printf("%s\n", *env);
		env++;
	}
}
