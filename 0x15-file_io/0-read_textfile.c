#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename:contents of the file
 * @letters:number of letters it should read and print
 *
 * Return:number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *new;
	char buf[1000];
	ssize_t writen, total = 0;
	size_t len;

	if (filename == NULL)
	{
		return (0);
	}
	new = fopen(filename, "r");

	if (new == NULL)
	{
		return (0);
	}
	while (fgets(buf, sizeof(buf), new))
	{
		len = strlen(buf);
		writen = fwrite(buf, 1, len, stdout);

		if (writen != (ssize_t)len)
		{
			fclose(new);
			return (0);
		}
		total += len;

		if (total >= (ssize_t)letters)
		{
			break;
		}
	}
	total -= 1;
	fclose(new);
	return (total);
}
