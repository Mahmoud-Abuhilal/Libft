*This project has been created as part of the 42 curriculum by mabuhila.*

Libft

Description

Libft is the first library project of the 42 curriculum. The goal of this project is to create a personal C library containing useful and reusable functions that can be used in future 42 projects.

The library is called libft.a and contains implementations of standard C library functions, additional string and memory utilities, output functions, and linked-list manipulation functions.

The project is divided into three main parts:

Part 1: Reimplementation of functions from the C standard library.

Part 2: Additional utility functions for strings, memory allocation, and file-descriptor output.

Part 3 (Bonus): Functions for creating and manipulating singly linked lists.

All functions use the ft_ prefix, following the requirements of the project.

Library Contents

Part 1 — Libc Functions

The following standard functions were reimplemented:

Function

Purpose

ft_isalpha

Checks whether a character is alphabetic.

ft_isdigit

Checks whether a character is a decimal digit.

ft_isalnum

Checks whether a character is alphanumeric.

ft_isascii

Checks whether a character belongs to the ASCII character set.

ft_isprint

Checks whether a character is printable.

ft_strlen

Returns the length of a string.

ft_memset

Fills a memory area with a specified byte.

ft_bzero

Sets a memory area to zero.

ft_memcpy

Copies bytes from one memory area to another.

ft_memmove

Copies bytes while correctly handling overlapping memory areas.

ft_strlcpy

Copies a string into a destination buffer with size limitation.

ft_strlcat

Appends a string to another string with size limitation.

ft_toupper

Converts a lowercase letter to uppercase.

ft_tolower

Converts an uppercase letter to lowercase.

ft_strchr

Locates the first occurrence of a character in a string.

ft_strrchr

Locates the last occurrence of a character in a string.

ft_strncmp

Compares two strings up to a specified number of characters.

ft_memchr

Locates a byte in a memory area.

ft_memcmp

Compares two memory areas.

ft_strnstr

Locates a substring within a string up to a specified length.

ft_atoi

Converts a string representation of an integer to an int.

ft_calloc

Allocates and initializes memory to zero.

ft_strdup

Allocates memory and creates a duplicate of a string.

These functions are implemented without relying on external functions, except where the subject explicitly permits required functions such as malloc, free, or write.

Part 2 — Additional Functions

The library also contains the following utility functions:

Function

Purpose

ft_substr

Creates a substring from a string.

ft_strjoin

Concatenates two strings into a newly allocated string.

ft_strtrim

Removes specified characters from the beginning and end of a string.

ft_split

Splits a string into an array of strings using a delimiter.

ft_itoa

Converts an integer into a newly allocated string.

ft_strmapi

Creates a new string by applying a function to every character.

ft_striteri

Applies a function to every character of a string.

ft_putchar_fd

Writes a character to a specified file descriptor.

ft_putstr_fd

Writes a string to a specified file descriptor.

ft_putendl_fd

Writes a string followed by a newline to a specified file descriptor.

ft_putnbr_fd

Writes an integer to a specified file descriptor.

Part 3 — Bonus Linked-List Functions

The bonus part provides functions for manipulating singly linked lists using the following structure:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

The linked-list functions are:

Function

Purpose

ft_lstnew

Creates a new list node.

ft_lstadd_front

Adds a node to the beginning of a list.

ft_lstsize

Returns the number of nodes in a list.

ft_lstlast

Returns the last node of a list.

ft_lstadd_back

Adds a node to the end of a list.

ft_lstdelone

Deletes one node and its content.

ft_lstclear

Deletes a node and all its successors.

ft_lstiter

Applies a function to the content of every node.

ft_lstmap

Creates a new list from the successive application of a function.

Instructions

Compilation

The project uses cc with the required compiler flags:

cc -Wall -Wextra -Werror

The provided Makefile builds the library using ar.

To compile the mandatory part:

make

This creates:

libft.a

at the root of the repository.

Bonus

To compile the bonus linked-list functions:

make bonus

Cleaning

Remove the object files:

make clean

Remove the object files and the library:

make fclean

Rebuild the project from scratch:

make re

Using Libft in Another Project

After building libft.a, it can be linked with another C project.

For example:

cc -Wall -Wextra -Werror main.c -L. -lft -o program

Then run the program:

./program

Make sure libft.h is included where the library functions are used:

#include "libft.h"

Makefile

The Makefile provides the following rules:

all — builds libft.a.

bonus — builds the library with the bonus linked-list functions.

clean — removes object files and the bonus marker.

fclean — removes object files, the bonus marker, and libft.a.

re — performs a full clean and rebuild.

The library is created using ar, as required by the project.

Project Structure

The repository contains the library source files, header, Makefile, and README at its root.

A typical structure is:

libft/
├── Makefile
├── README.md
├── libft.h
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ...
├── ft_substr.c
├── ft_strjoin.c
├── ft_split.c
├── ...
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
└── ft_lst*.c

Technical Choices

The project is written entirely in C and follows the requirements of the 42 Libft subject.

Important technical constraints include:

No global variables.

Compilation with -Wall -Wextra -Werror.

Use of cc as the compiler.

Use of ar to create the static library.

The library libft.a is created at the repository root.

Dynamically allocated memory must be properly managed.

Helper functions, when needed, are kept local to their source files using static.

Functions use the required ft_ prefix.

Resources

Documentation

man pages for the original C library functions.

C standard library documentation.

malloc(3), free(3), and write(2) manual pages.

42 Libft project subject.

The official project subject was used as the specification for required functions, prototypes, behavior, compilation requirements, and submission requirements.

AI Usage

AI was used as a supporting learning and documentation tool during this project.

In particular, AI was used to:

Help understand and organize the README requirements.

Help explain concepts and clarify questions encountered while working on the project.

Review the structure and documentation of the project.

Assist with documenting the purpose of the implemented functions.

AI was not used as a replacement for understanding the implementation. The project code should be understood by the student and be explainable during peer evaluation and any required modification.

Testing

Testing is an important part of the development process. Each function should be tested with normal cases, boundary cases, and invalid or edge cases where relevant.

Additional test programs can be created locally to compare the behavior of the implemented functions with the expected behavior described by their corresponding manual pages.

These test programs are not part of the submitted library unless required.
