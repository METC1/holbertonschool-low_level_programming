#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
char *buffer(char *filename);

/**
 * buffer - function buffer of 1024 bytes
 * @filename: name of ile
 * Return: Always 0.
 */
char *buffer(char *filename)
{
	char *buffr;

	buffr = malloc(sizeof(char) * 1024);
	if (buffr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffr);
}




/**
 * main - copy files
 * @args: number of parameters
 * @av: array (1)file to copy, (2)destination file
 * Return: Always 0.
 */
int main(int args, char **av)
{
	int fd, chrrd, chrwr, chr, clse;
	char *buffr;

fd = 0;
chrrd = 0;
chrwr = 0;
chr = 0;

if (args != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
buffr = buffer(av[2]);
	fd = open(av[1], O_RDONLY);
	chrrd = read(fd, buffr, 1024);
	chr = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while (chrrd > 0)
	{
		if (fd == -1 || chrrd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		chrwr = write(chr, buffr, chrrd);
		if (chr == -1 || chr != chrrd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		chrrd = read(fd, buffr, 1024);
		chr = open(av[2], O_WRONLY | O_APPEND);
	} while (chrrd > 0);
	free(buffr);
	clse = close(fd);
	if (clse == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	clse = close(chr);
	if (clse == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", chr);
		exit(100);
	}
	if (chrwr == 0)
		return (0);
return (0);
}
