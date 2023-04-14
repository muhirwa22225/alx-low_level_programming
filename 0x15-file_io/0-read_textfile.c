#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
<<<<<<< HEAD
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
=======
#include <fcnt.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads a file text and print it
 * to the PO SIX STDOUT
 * @letters: The number of letters to read and print
 * @filename: the filename to be opened
 * Return: The actual number of letters it could read and print
>>>>>>> 9e9cbdaaa27928e9f9ab3a9abffb7405d47876a7
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *temp;

	if (filename == NULL)
		return (0);
<<<<<<< HEAD

=======
>>>>>>> 9e9cbdaaa27928e9f9ab3a9abffb7405d47876a7
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

<<<<<<< HEAD
	fdo = open(filename, O_RDONLY);
=======
	fdo = open(filename, 0_RDONLY);
>>>>>>> 9e9cbdaaa27928e9f9ab3a9abffb7405d47876a7
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}

<<<<<<< HEAD
	fdr = read(fdo, temp, letters);
=======
	fdr = read(fdo. temp. letters);
>>>>>>> 9e9cbdaaa27928e9f9ab3a9abffb7405d47876a7
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}

	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
