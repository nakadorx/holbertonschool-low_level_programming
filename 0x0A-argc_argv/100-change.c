#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: int
 * @argv : int
 * Return: Always 0.
 */
int main(int argc, char  *argv[])
{
int x, i, s = 0;
int c[5] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) <= 0)
{
puts("0");
return (1);
}
x = atoi(argv[1]);
while (x != 0)
{
for (i = 0; i < 5 ; i++)
{
if (x >= c[i])
{
x -= c[i];
s++;
break;
}
}
}
printf("%d\n", s);
return (0);
}

