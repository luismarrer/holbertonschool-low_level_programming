# C - Singly Linked Lists

## Description

This Holberton School project focuses on the implementation and manipulation of singly linked lists in C.
Unlike arrays, singly linked lists are a data structure used to store sequences of elements,
with each element pointing to the next one, allowing for efficient insertions and deletions.

## Project Requirements

- Allowed editors: `vi`, `vim`, `emacs`.
- All files will be compiled using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must use the Betty style.
- No global variables are allowed.
- A maximum of 5 functions per file is allowed.
- The only standard C library functions allowed are
  `malloc`, `free`, and `exit`. The use of functions like
  `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- All function prototypes must be included in the header file `lists.h`.
- All header files must be protected against multiple inclusions.

## Mandatory Tasks

0. Write a function that prints all the elements of a `list_t` list.

    - Prototype: `size_t print_list(const list_t *h);`
    - Return: the number of nodes
    - Format: see example
    - If `str` is `NULL`, print `[0] (nil)`
    - You are allowed to use `printf`

### File: `0-print_list.c`

1. Write a function that returns the number of elements in a linked `list_t` list.

    - Prototype: `size_t list_len(const list_t *h);`

### File: `1-list_len.c`

2. Write a function that adds a new node at the beginning of a `list_t` list.

    - Prototype: `list_t *add_node(list_t **head, const char *str);`
    - Return: the address of the new element, or `NULL` if it failed
    - `str` needs to be duplicated
    - You are allowed to use `strdup`

### File: `2-add_node.c`

3. Write a function that adds a new node at the end of a `list_t` list.

    - Prototype: `list_t *add_node_end(list_t **head, const char *str);`
    - Return: the address of the new element, or `NULL` if it failed
    - `str` needs to be duplicated
    - You are allowed to use `strdup`

### File: `3-add_node_end.c`

## Author

Luis Marrero - lmarrero1070@gmail.com

