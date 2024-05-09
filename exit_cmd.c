#include "main.h"

/**
 * exit_cmd - handle the exit status
 * @status: status code
 **/

void exit_cmd(int status)
{
	if (WIFEXITED(status))
		exit(WEXITSTATUS(status));
	else
		exit(0);
}
