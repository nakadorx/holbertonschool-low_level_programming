#include "holberton.h"
#include <stdio.h>
/**
 * err - check the code for Holberton School students.
 * @n_er : int
 * @argv : int
 * @val : int
 * Return: Always 0.
 */
void err(int n_er, char *argv[], int val)
{
	switch (n_er)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", val);
		break;
	}
	exit(n_er);
}
/**
 * main - check the code for Holberton School students.
 * @argc : int
 * @argv : int
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t rf = 1024, wf;
	char buf[1024];

	if (argc != 3)
	err(97, argv, 0);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_from == -1)
		err(98, argv, 0);
	if (file_to == -1)
		err(99, argv, 0);
	while ((rf = read(file_from, buf, 1024)) > 0)
	{
		wf = write(file_to, buf, rf);
		if (wf == -1)
			err(99, argv, 0);
	}	
	if (rf == -1)
		err(98, argv, 0);
	if (close(file_from) == -1)
		err(100, argv, file_from);
	if (close(file_to) == -1)
		err(100, argv, file_to);
	return (0);
}
