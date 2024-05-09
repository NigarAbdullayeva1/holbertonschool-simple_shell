#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>

extern char **environ;
int execute_cmd(char *cmd, char *argv[]);
int slash_checker(const char *str);
char *get_file_loc(char *path, char *file_name);
char *get_file_path(char *file_name);
void print_env(void);
void shell_exit(int status);
#endif
