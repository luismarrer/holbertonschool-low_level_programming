# C - File I/O

## Description

This Holberton School project focuses on file input and output operations in C.
The project explores how to create, open, close, read, and write files using system
calls such as `open`, `close`, `read`, and `write`. Additionally, it covers file descriptors,
standard file descriptors (STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO).

## Learning Objectives

- Mastering how to create, open, close, read, and write files.
- Comprehending what file descriptors are and the purposes of the 3 standard file descriptors.
- Learning to use the I/O system calls: `open`, `close`, `read`, and `write`.
- Knowing what file permissions are and how to set them when creating files.
- Distinguishing between functions and system calls.

## Project Requirements

- Allowed editors: `vi`, `vim`, `emacs`.
- All files will be compiled using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must adhere to the Betty style.
- No global variables are allowed.
- A maximum of 5 functions per file.
- The only standard C library functions allowed are `malloc`, `free`, and `exit`.
- Syscalls allowed: `read`, `write`, `open`, `close`.
- Function prototypes must be included in the header file `main.h`.
- All header files must be protected against multiple inclusions.

## Mandatory Tasks

### 0. Tread lightly, she is near
**File:** `0-read_textfile.c`
Write a function that reads a text file and prints it to the POSIX standard output.

### 1. Under the snow
**File:** `1-create_file.c`
Create a function that creates a file with specific permissions.

### 2. Speak gently, she can hear
**File:** `2-append_text_to_file.c`
Write a function that appends text at the end of a file.

### 3. cp
**File:** `3-cp.c`
Write a program that copies the content of one file to another.

## Author

Luis Marrero - lmarrero1070@gmail.com

