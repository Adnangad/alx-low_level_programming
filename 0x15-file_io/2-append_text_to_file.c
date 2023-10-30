#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:pointer to file name
 * @text_content:text to be appended
 *
 * Return:1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *app;

	if (filename == NULL)
	{
		return (-1);
	}
	app = fopen(filename, "a");

	if (app == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fprintf(app, "%s", text_content);
	fclose(app);
	return (1);
}
