#include "holberton.h"
/**
* rev_string - check the code for Holberton School students.
* @s : char
* Return: Always 0.
*/

void rev_string(char *s)
{
int i = 0 , x;
char m[509] ;
while (s[i] != '\0')
{
m[i]=s[i];
i++;
}
i--;
for (x = i  ; x >= 0  ; x--)
{

    s[i-x]=m[x];
}
}
