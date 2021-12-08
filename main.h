#ifndef _MAIN_H_
#define _MAIN_H_
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define DELIM " ,!¡¿?\'\"\n\t"
#define STDOUT STDOUT_FILENO
#define STDIN STDIN_FILENO
#define STDERR STDERR_FILENO

extern char **environ;
char **tokenizer(char *BUFF);
char *check_path(char **Arg_str);
void _error(char *CMD);
int built_in(char **Arg_str, int ct_output, char *row);
int Run(char **Arg_str, int ct_output, char *row);
int _fork(char **Arg_str, int ct_output);
int comp_Arg(char **Arg_str, int ct_output);
void _signal(int sig);
char *rd_row(void);
char *get_env(void);
int _strncmp(char *string_1, char *string_2, int len);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *string_1, char *string_2);
int _strlen(char *a);

#endif
