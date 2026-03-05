# Libft

Part of the 42 curriculum. This project builds a foundational C utility library by reimplementing standard routines (string/memory helpers, character checks, conversions) plus a small linked‑list API. The goal is to understand core C behavior, memory safety, and reusable tooling at a low level.

## Project Overview
- Reimplemented a subset of libc‑style functions in C.
- Added bonus linked list utilities for common list operations.
- Designed as a reusable static library for later C projects.

## Features
- Memory utilities: `memset`, `memcpy`, `memmove`, `memcmp`, `memchr`, `bzero`, `calloc`.
- String utilities: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`, `strdup`, `strjoin`, `strtrim`, `substr`, `split`.
- Character checks and case conversion: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `tolower`, `toupper`.
- Conversions and output: `atoi`, `itoa`, `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`.
- Bonus: singly linked list helpers (create, add, delete, iterate, map, size, last).

## Tech Stack / Concepts
- Language: C (C standard library reimplementation)
- Manual memory management (malloc/free)
- Pointer arithmetic and buffer safety
- Algorithmic reasoning for edge cases and complexity
- Build tooling via Makefile

## Key Design Decisions
- **Consistent APIs:** mirrored libc‑style signatures for familiarity and drop‑in use.
- **Safety & correctness:** careful handling of null pointers, overlap in `memmove`, and size‑bounded string operations.
- **Modular structure:** one function per file for clarity, testing, and reuse.

## Challenges & What I Learned
- **Overlapping memory regions:** implementing `memmove` correctly reinforced understanding of copy direction and aliasing.
- **String boundaries:** writing `strlcpy`/`strlcat` emphasized defensive size handling and null‑termination.
- **Memory lifecycle:** functions like `split` and list utilities required rigorous cleanup to avoid leaks.
- **API design:** balancing usability with low‑level constraints improved my ability to build predictable C interfaces.

## How to Build / Run
From the repository root:
- `make` to build `libft.a`
- `make clean` to remove object files
- `make fclean` to remove objects and the library
- `make re` to rebuild from scratch

To use in another C project, link against `libft.a` and include `libft.h`.

## Screenshots / Demo
Not applicable (library project).

---

**Score:** 125/100 (per 42 evaluation)
