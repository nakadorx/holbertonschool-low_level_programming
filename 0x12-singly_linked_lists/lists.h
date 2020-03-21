#ifndef _LISTS_
#define _LISTS_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* struct list_s - check the code for Holberton School students.
* @str: int
* @len: int
* @next: int
*
* Description: singly linked list node structure
* for Holberton project // Aladin Bensassi
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h);

#endif