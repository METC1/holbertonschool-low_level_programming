#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Reads the specified bytes of a text file
 * @filename: filename of file to read
 * @letters: number of letters to read
 * Return: ssize_t number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t chrrd, chrwr;
int fd;
char *buffer;

if (filename == NULL)
	return (0);
buffer = malloc(letters + 1);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
chrrd = read(fd, buffer, letters);
if (chrrd == -1)
	return (0);
buffer[letters + 1] = '\0';
chrwr = write(fd, buffer, chrrd);
/*printf("%s", buffer);*/
close(fd);
free(buffer);
return (chrwr);
}
