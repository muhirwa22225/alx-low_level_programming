#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - A function that creates a file
 * @filename: the name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * (file can not be created, file can not be written,
 * write “fails”, etc…)
 * Return: Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, 0_RDWR | 0_CREAT | 0_TRUNC, 0600);
	if (fdo < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}
