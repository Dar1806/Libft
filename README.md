# Libft - C Library Implementation

A comprehensive C library implementing standard C library functions and additional utilities. This project is part of the 42 Common Core curriculum.

## Overview

Libft is a custom implementation of the C standard library (libc) with additional bonus functions. It provides a foundation for future projects by implementing essential string manipulation, memory management, and utility functions.

## Features

### Mandatory Functions

#### Character Classification
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable

#### Character Conversion
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

#### String Functions
- `ft_strlen` - Calculate string length
- `ft_strchr` - Locate first occurrence of character in string
- `ft_strrchr` - Locate last occurrence of character in string
- `ft_strncmp` - Compare strings up to n characters
- `ft_strnstr` - Locate substring in string
- `ft_strlcpy` - Copy string with length limitation
- `ft_strlcat` - Concatenate strings with length limitation
- `ft_strdup` - Duplicate string
- `ft_substr` - Extract substring
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Remove specified characters from start and end
- `ft_split` - Split string by delimiter

#### Memory Functions
- `ft_memset` - Fill memory with byte value
- `ft_bzero` - Clear memory
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Move memory area (handles overlapping regions)
- `ft_memchr` - Search for byte in memory
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and initialize memory

#### Conversion Functions
- `ft_atoi` - Convert ASCII string to integer
- `ft_itoa` - Convert integer to ASCII string

#### File Descriptor Functions
- `ft_putchar_fd` - Write character to file descriptor
- `ft_putstr_fd` - Write string to file descriptor
- `ft_putendl_fd` - Write string with newline to file descriptor
- `ft_putnbr_fd` - Write integer to file descriptor

#### String Mapping Functions
- `ft_strmapi` - Apply function to each character and create new string
- `ft_striteri` - Apply function to each character in-place

### Bonus Functions (Linked Lists)

- `ft_lstnew` - Create new list node
- `ft_lstadd_front` - Add node to front of list
- `ft_lstadd_back` - Add node to back of list
- `ft_lstsize` - Count list nodes
- `ft_lstlast` - Get last node
- `ft_lstdelone` - Delete single node
- `ft_lstclear` - Delete entire list
- `ft_lstiter` - Apply function to each node
- `ft_lstmap` - Create new list by applying function to each node

## Compilation

### Build the library
```bash
make
```

### Build with bonus functions
```bash
make bonus
```

### Clean object files
```bash
make clean
```

### Full clean (remove .o and .a files)
```bash
make fclean
```

### Rebuild
```bash
make re
```

## Usage

Include the header file in your project:
```c
#include "libft.h"
```

Compile with the library:
```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```

## Project Structure

- `libft.h` - Header file with function declarations
- `ft_*.c` - Individual function implementations
- `Makefile` - Build configuration

## Requirements

- GCC compiler
- Make utility
- Standard C library (libc)

## Compiler Flags

The project uses strict compiler flags for code quality:
- `-Wall` - Enable all warnings
- `-Wextra` - Enable extra warnings
- `-Werror` - Treat warnings as errors

## Author

nmeunier (marvin@42.fr)

## License

This project is part of the 42 Common Core curriculum.
