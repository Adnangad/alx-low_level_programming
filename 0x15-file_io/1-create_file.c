#include "main.h"

/**
 * create_file - creates a file
 * @filename:pointer to name offile
 * @text_content:string to be written
 *
 * Return:1 on success
 */
int create_file(const char *filename, char *text_content)
{
	FILE *wrt;
	size_t len, riten;

	if (filename == NULL)
	{
		return (-1);
	}
	wrt = fopen(filename, "w");

	if (wrt == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fclose(wrt);
		return (1);
	}
	len = strlen(text_content);
	riten = fwrite(text_content, 1, len, wrt);

	if (fclose(wrt) != 0)
	{
		return (-1);
	}
	return ((riten == len) ? 1 : -1);
}
