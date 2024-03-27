# C - Doubly Linked Lists

## Description

This Holberton School project focuses on the implementation and manipulation of doubly linked lists in C.
Unlike singly linked lists, each element in a doubly linked list has references to both the next and the previous element,
allowing for more versatile list operations. This structure enables efficient insertions and deletions from both ends
of the list and straightforward reverse traversal.

## Project Requirements

- Allowed editors: `vi`, `vim`, `emacs`.
- All files will be compiled with `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must use the Betty style.
- No global variables are allowed.
- A maximum of 5 functions per file is allowed.
- The only standard C library functions allowed are `malloc`, `free`, `printf`, and `exit`.
- All function prototypes must be included in the header file `lists.h`.
- All header files must be protected against multiple inclusions.

## Mandatory Tasks

0. **Print list**: Write a function that prints all the elements of a `dlistint_t` list.
    - Prototype: `size_t print_dlistint(const dlistint_t *h);`
    - Return: the number of nodes.
    - Format: see example

### File: 0-print_dlistint.c

1. **List length**: Write a function that returns the number of elements in a linked `dlistint_t` list.
    - Prototype: `size_t dlistint_len(const dlistint_t *h);`

### File: 1-dlistint_len.c

2. **Add node**: Write a function that adds a new node at the beginning of a `dlistint_t` list.
    - Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
    - Return: the address of the new element, or NULL if it failed.

### File: 2-add_dnodeint.c

3. **Add node at the end**: Write a function that adds a new node at the end of a `dlistint_t` list.
    - Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
    - Return: the address of the new element, or NULL if it failed.

### File: 3-add_dnodeint_end.c

4. **Free list**: Write a function that frees a `dlistint_t` list.
    - Prototype: `void free_dlistint(dlistint_t *head);`

### File: 4-free_dlistint.c

5. **Get node at index**: Write a function that returns the nth node of a `dlistint_t` linked list.
    - Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
    - If the node does not exist, return NULL.

### File: 5-get_dnodeint.c

6. **Sum list**: Write a function that returns the sum of all the data (`n`) of a `dlistint_t` linked list.
    - Prototype: `int sum_dlistint(dlistint_t *head);`
    - If the list is empty, return 0.

### File: 6-sum_dlistint.c

7. **Insert at index**: Write a function that inserts a new node at a given position.
    - Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
    - If it is not possible to add the new node at index `idx`, do not add the new node and return NULL.

### File: 7-insert_dnodeint.c

8. **Delete at index**: Write a function that deletes the node at index `index` of a `dlistint_t` linked list.
    - Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
    - Returns: 1 if it succeeded, -1 if it failed.

### 8-delete_dnodeint.c

## Author

Luis Marrero - lmarrero1070@gmail.com

