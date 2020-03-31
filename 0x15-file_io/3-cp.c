#include "holberton.h"
#include <stdio.h>
/**
 * err - check the code for Holberton School students.
 * @n_er : int
 * @argv : int
 * @x : int
 * Return: Always 0.
 */
void err(int n_er, int x, char *argv[])
{
	switch (x)
	{
	case 7:
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		break;
	case 8:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		break;
	case 9:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		break;
	case 1:
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		break;
	case 0:
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
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
	int file_from, file_to, file_close;
	ssize_t rf, wf;
	char buf[1024];

	if (argc != 3)
	err(97, 7, argv);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_from == -1)
		err(98, 8, argv);
	if (file_to == -1)
		err(99, 9, argv);
	rf = read(file_from, buf, 1024);
	if (rf == -1)
		err(98, 8, argv);
	wf = write(file_to, buf, rf);
	if (wf == -1)
		err(97, 7, argv);
	file_close = close(file_from);
	if (file_close == -1)
		err(100, 1, argv);
	file_close = close(file_to);
	if (file_close == -1)
		err(100, 0, argv);
	return (0);
}
