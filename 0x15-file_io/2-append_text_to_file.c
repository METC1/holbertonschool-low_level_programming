#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - appends text to a text file
 * @filename: filename of file to append text to
 * @text_content: content to be put on text file
 * Return: int 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t chrwr;
int fd, chars;

chars = 0;
if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);
if (text_content != NULL)
{
	while (text_content[chars] != '\0')
	{
		chars++;
	}
	chrwr = write(fd, text_content, chars);
	if (chrwr == -1)
	return (-1);
} else
{
	return (1);
}
close(fd);
return (1);
}
