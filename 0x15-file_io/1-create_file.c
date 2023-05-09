#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file.
 *
 * @filename: input string
 * @text_content: input string
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, wcount = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
