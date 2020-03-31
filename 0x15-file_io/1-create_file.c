#include "holberton.h"
/**
 * create_file - check the code for Holberton School students.
 * @text_content : int
 * @filename : int
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;
	ssize_t wf;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY, 0600);
	if (file == -1)
		return (-1);
	while (text_content[i])
		i++;
	wf = write(file, text_content, i);
	if (wf == -1)
		return (-1);
	close(file);
	return (1);
}
