
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
[check_built-in.c] | function that checks if the bultins | int Run(char **Arg_str, int ct_output, char *row)
[check_built-in.c] | function that checks if the bultins | int Run(char **Arg_str, int ct_output, char *row)
[check_line.c] | function that checks line | char *rd_row(void)
[get_path.c] | function that checks if the command exists | char *get_env(void)
[is_path.c] | function that checks if the path | int comp_Arg(char **Arg_str, int ct_output)
[main.h] | function library | 
[pid.c | function that check fork | int _fork(char **Arg_str, int ct_output)
[shell.c | function that front-end | int main(void)
[tokenizer.c | tokenization function | char **tokenizer(char *BUFF)


## Installation

* Clone this repository: git clone "https://github.com/dmac24/simple_shell"
* Change directories into the repository: cd simple_shell
* Compile: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
* Run the shell in interactive mode or non-interactive mode.
* ./hsh

## Testing the Program

Interactive mode:


![Interactive mode_](https://user-images.githubusercontent.com/85509333/145378389-cbfaa40a-89df-4d08-9cc3-1c4b1fa8dfc5.png)

Non-interactive mode:

![no interactive](https://user-images.githubusercontent.com/85509333/145379653-97016dd6-aed9-44c4-817a-d73c723f33e5.png)

## Example

### command ls 

![ls](https://user-images.githubusercontent.com/85509333/145380349-684a106c-0cc0-42d9-aec7-f06098978f91.png)

### command ls-l

![ls  l](https://user-images.githubusercontent.com/85509333/145380880-f2c2916b-2c69-4324-a7e2-5214c4d4efa3.png)

### command env

![env](https://user-images.githubusercontent.com/85509333/145381243-cc04ac72-c7b1-4218-9750-9ff7300b9c96.png)

## manual 

### To enter the manual 
```
man -l man_1_simple_shell
```

## Authors
```
* Maycol David Roa [@maycolroa](https://github.com/maycolroa)
* Diana Marcela Ayala [@dmac24](https://github.com/dmac24)
```
