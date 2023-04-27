#include "shell.h"
#include "limits.h"

/**
*handle_exit_command - a function that handles the exit command
*@cmd: a pointer to pointer
*@line: a pointer
*/

void handle_exit_command(char **cmd, char *line)
{
	if (strcmp(cmd[0], "exit") == 0)
	{
	free(line);
	if (cmd[1])
	{

	char *endptr;
	int status = strtol(cmd[1], &endptr, 10);

	if (*endptr != '\0' || status < 0 || status > INT_MAX)
	{
	fprintf(stderr, "Invalid exit status\n");
	exit(EXIT_FAILURE);
	}
	exit(status);
	}
	free_array(cmd);
	exit(EXIT_SUCCESS);
	}
}
