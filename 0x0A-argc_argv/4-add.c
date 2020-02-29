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
int i = 1, x = 0;
while (i < argc)
{
if (!(*argv[i] >= '0' && *argv[i] <= '9'))
{
printf("Error\n");
return (1);
break;
}
else if (argc < 3)
printf("0\n");
else
{
x += atoi(argv[i]);
}
i++;
}
printf("%d\n" ,x);
return (0);
}
