#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: input string
 * @text_content: input string
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wcount = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[wcount] != '\0')
			wcount++;
		if (write(file, text_content, wcount) == -1)
			return (-1);
	}
	close(file);
	return (1);
}
