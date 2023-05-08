#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - A function to create file
 * @filename: name of the file to create
 * @text_content: string to write on the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fw, fo, len = 0;
	
	if (filename == NULL)
		return (-1);
	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fo < 0)
		return (-1);
	while (text_content && *(text_content + len))
		len++;

	fw = write(fo, text_content, len);
	close(fo);
	if (fw < 0)
		return (-1);
	return (1);
}
