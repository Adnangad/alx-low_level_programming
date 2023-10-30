#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * error - prints error message to stdout
 * @val:value to use
 * @form:format string
 *
 * Return:none
 */
void error(int val, const char *form, ...)
{
	va_list lis;

	va_start(lis, form);
	dprintf(STDERR_FILENO, form, lis);
	va_end(lis);
	exit(val);
}
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUF_SIZE];
	ssize_t red, riten;

	if (argc != 3)
	{
		error(97, "Usage: cp file_from file_to\n");
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		error(98, "Error: Can't read from file %s\n", file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		error(99, "Error: Can't write to file %s\n", file_to);
	}
	while ((red = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		riten = write(fd_to, buffer, red);

		if (riten == -1)
		{
			error(99, "Error: Can't write to file %s\n", file_to);
		}
	}
	if (red == -1)
	{
		error(98, "Error: Can't read from file %s\n", file_from);
	}
	if (close(fd_from) == -1)
	{
		error(100, "Error: Can't close fd %d\n", fd_from);
	}
	if (close(fd_to) == -1)
	{
		error(100, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);
}
