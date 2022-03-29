#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - creates a text file
 * @filename: filename of file to create
 * @text_content: content to be put on text file
 * Return: int 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
ssize_t chrwr;
int fd, chars;

chars = 0;
if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_CREAT, 0600);
if (fd == -1)
	return (-1);
if (text_content == NULL)
	text_content = "";
while (text_content[chars] != '\0')
{
	chars++;
}
chrwr = write(fd, text_content, chars);
if (chrwr != chars)
	return (-1);
close(fd);
return (1);
}
