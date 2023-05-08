#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - A function that reads the text and
 * print it to the POSIX standard output
 * @filename: The file to open
 * @letters: The number of letter to read and print
 * Return: Actual number of letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fr, fo, fw;
	char *project;

	if (filename == NULL)
		return (0);
	project = malloc(sizeof(char) * letters);
	if (project == NULL)
		return (0);
	fo = open(filename, O_RDONLY);

	if (fo < 0)
	{
		free(project);
		return (0);
	}
	fr = read(fo, project, letters);

	if (fr < 0)
	{
		free(project);
		return (0);
	}
	fw = write(STDOUT_FILENO, project, fr);

	free(project);
	close(fo);

	if (fw < 0)
		return (0);
	return ((ssize_t)fw);
}
