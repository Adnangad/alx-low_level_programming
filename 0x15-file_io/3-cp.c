#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * main - prints error message to stdout
 * @argc:arg count
 * @argv:actual contents of arg
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd_stat, wr_stat;
	mode_t own = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, own);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	rd_stat = 1;
	while (rd_stat)
	{
		rd_stat = read(fd_from, buf, BUF_SIZE);
		if (rd_stat == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		}
		if (rd_stat > 0)
		{
			wr_stat = write(fd_to, buf, rd_stat);
			if (wr_stat != rd_stat || wr_stat == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
