# SIMPLE_SHELL

## Description
This project is a simple version of the linux shell made for Holberton School. This simple_shell is a command line interpreter, created using the C programming Language and it can do many functionalities that a real shell does.

## Requirements

Simple_shell is designed to run in the Ubuntu 14.04 and to be compiled using the GNU compiler collection v. gcc 4.8.4.

## Structure

General Flow Chart:



## File Usage

Files|Description|Functions
--|--|--
[.c](.) | |
[.c](.)| |
[main.h](.main.h)| Header Principal | Protypes
[README.md](.README.md)| Description project |
[man_3_printf](.man_3_printf)| Manual page | 

## Installation

* Clone this repository: git clone "https://github.com/dmac24/simple_shell"
* Change directories into the repository: cd simple_shell
* Compile: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
* Run the shell in interactive mode or non-interactive mode.

## Testing the Program

Interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
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

## Bugs

None registered so far

### Authors

* Maycol David Roa [@maycolroa](https://github.com/maycolroa)
* Diana Marcela Ayala [@dmac24](https://github.com/dmac24)
