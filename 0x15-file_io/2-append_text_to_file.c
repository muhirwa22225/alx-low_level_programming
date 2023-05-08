#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - A function that append text at the end of the file
 * @filename: the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 if file exists, -1 if the file doesn't exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_RDWR | O_APPEND);
	if (fo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fo);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fw = write(fo, text_content, len);
	close(fo);
	if (fw < 0)
		return (-1);
	return (1);
}
