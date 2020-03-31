#include "holberton.h"
/**
 * read_textfile - check the code for Holberton School students.
 * @letters : int
 * @filename : int
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int file;
	ssize_t rf,wf;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
    	return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	rf = read(file,buf,letters);
	wf = write(STDOUT_FILENO,buf,rf);
	if (wf == -1)
		return (0);

	close(file);
	return(wf);
}
