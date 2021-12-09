
![logo](https://user-images.githubusercontent.com/85509333/145334215-1a18b1d0-b75b-4b6b-8b01-dd06dd86d314.jpg)

# SIMPLE_SHELL

![shell](https://user-images.githubusercontent.com/85509333/145334324-6b89fa02-7518-4a52-a15e-546c7b3e0611.jpeg)

## Description
This project is a simple version of the linux shell made for Holberton School. This simple_shell is a command line interpreter, created using the C programming Language and it can do many functionalities that a real shell does.

## Requirements

Simple_shell is designed to run in the Ubuntu 14.04 and to be compiled using the GNU compiler collection v. gcc 4.8.4.

## Structure

### General Flow Chart:

![flow chart](https://user-images.githubusercontent.com/85509333/145333825-159e5e24-3a86-4a9b-a482-82b9d5051aed.png)



## File Usage

Files|Description|Functions
--|--|--
[aux_compare.c] | function that compares strings | -int _strncmp -int _strcmp
[aux_concatenate.c] |function that concatenates | -char *_strcat(char *dest, char *src)
[aux_copy.c] | function that copy string | char *_strcpy(char *dest, char *src)
[aux_counts.c] | function that count string | int _strlen(char *a)
[aux_e.c] | function that prints error | void _error(char *CMD)
[built-in.c] | function that checks if the env exit command exists | int built_in(char **Arg_str, int ct_output, char *row)

## Installation

* Clone this repository: git clone "https://github.com/dmac24/simple_shell"
* Change directories into the repository: cd simple_shell
* Compile: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
* Run the shell in interactive mode or non-interactive mode.

## Testing the Program

Interactive mode:

```
$ ./hsh
#holbies$ ls
hsh main.c shell.c
#holbies$
#holbies$ exit
$
```

Non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Features
.....

## Example

.....
añadir casos de salida

## Bugs

None registered so far

## Authors

* Maycol David Roa [@maycolroa](https://github.com/maycolroa)
* Diana Marcela Ayala [@dmac24](https://github.com/dmac24)
