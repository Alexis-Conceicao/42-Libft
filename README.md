*This project has been created as part of the 42 curriculum by alconcei.*

# Libft

## Description

The goal is to build my own C library, `libft.a`, by re-implementing a set of standard C library functions, plus some additional utility functions, without using the originals (apart from the few allowed, such as `malloc`, `free` and `write`).

This library is meant to be reused and extended in all later 42 projects.

The library is split into the following parts:

- **Part 1 - libc functions:** re-implementations of standard functions with the same prototypes and behaviour, prefixed with `ft_`.
  - Character checks and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
  - String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
  - Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
  - Conversion: `ft_atoi`
- **Part 2 - additional functions:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Part 3 - linked lists:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

### Requirements

- A C compiler (`cc`) and `make`
- Compiled with the flags `-Wall -Wextra -Werror`

### Compilation

From the root of the repository:

```bash
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

### Usage

Include the header in your code:

```c
#include "libft.h"
```

Then compile your program and link it against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

### References

- `man 3` pages for each re-implemented function (e.g. `man 3 strlcpy`)
- [GNU Make documentation](https://www.gnu.org/software/make/manual/)
- *The C Programming Language*, Kernighan & Ritchie

### Use of AI

AI was used for, helping with writing this README, clarifying confusion about certain exercises/functions, suggesting edge cases to test.