![Libft Banner](image/libft_banner.png)

A custom C utility library that reimplements core libc-style functions and adds reusable linked-list helpers for low-level systems projects.

## Overview

Libft was built as part of the 42 curriculum to strengthen core C fundamentals through practical implementation of everyday utility functions.
Instead of treating standard library calls as black boxes, this project rebuilds them from scratch to understand pointer behavior, memory safety, API consistency, and edge-case handling.

The result is a static library used across later projects as a reliable personal foundation for string, memory, conversion, output, and list operations.

**Score: 125/100**

## Demo / Screenshots

This is a library project.

- Used in [fract-ol](https://github.com/chilituna/fract-ol) for utility and string/memory helpers in a graphics project
- Used in [miniRT](https://github.com/chilituna/miniRT) as foundational C helpers for parsing and runtime operations
- Used in [pipex](https://github.com/chilituna/pipex/tree/main/pipex) to support reusable low-level functions across the project

## Tech Stack

- **Language:** C
- **Build System:** Make
- **Output:** static library (`libft.a`)
- **Concepts:** manual memory management, pointer arithmetic, defensive boundary checks

## Architecture / Implementation

### Core Modules

- **Memory utilities:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **String utilities:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- **Character and conversion utilities:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`, `ft_itoa`
- **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Bonus linked list API:** creation, insertion, iteration, mapping, deletion, and size helpers

### Key Technical Decisions

- Kept function signatures close to libc conventions for familiarity and easy reuse
- Isolated each function in its own source file for maintainability and modular compilation
- Prioritized correctness for edge cases such as overlapping buffers, null-termination, and allocation failures

## Features

- Reimplementation of essential libc-like utilities in pure C
- Reusable static library for future projects
- Bonus singly linked-list toolkit
- Consistent naming convention (`ft_`) and predictable APIs
- Makefile targets for build, clean, and rebuild workflows

## Getting Started

### Prerequisites

- GCC or Clang
- Make
- Linux or macOS environment

### Build

1. Clone the repository:

	```bash
	git clone https://github.com/chilituna/Libft.git
	cd Libft/Libft
	```

2. Build the static library:

	```bash
	make
	```

3. Useful make targets:

	```bash
	make clean
	make fclean
	make re
	```

### Use in Another Project

- Include `libft.h` in your source files
- Link `libft.a` during compilation

Example:

```bash
cc main.c -L. -lft -I. -o my_program
```

## Project Structure

```text
.
├── Libft/
│   ├── libft.h                 # Public header with function prototypes
│   ├── Makefile                # Build rules for libft.a
│   ├── ft_*.c                  # Core libc-style utility implementations
│   └── ft_lst*_bonus.c         # Bonus linked-list API implementation
└── README.md
```

## Future Improvements

- Add an automated test suite with coverage reporting
- Add CI workflow for build and basic validation
- Provide benchmark comparisons for selected functions
- Add usage examples for common integration patterns

## What I Learned

- Implementing low-level utilities improved my understanding of pointer safety and memory boundaries
- Rebuilding familiar APIs sharpened my focus on contract design and edge-case behavior
- Structuring a reusable static library improved code organization and long-term maintainability

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.