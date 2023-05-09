#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exit_helper - custom exit
 *
 * @status: int input
 * @s: string input
 * @file: int inout
 *
 * Return: void
 */
void exit_helper(int status, char *s, int file)
{
	switch (status)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(99);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
			exit(100);
			break;
	}
}

/**
 * main - check the code.
 *
 * @argc: input size of @argv
 * @argv: input array of command line arguments
 *
 * Return:  Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, wcount = 0, rcount = 0;
	char buffer[1024];

	if (argc != 3)
		exit_helper(97, '\0', 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_helper(98, argv[1], 0);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		exit_helper(99, argv[2], 0);

	while ((rcount = read(file_from, buffer, 1024)))
	{
		if (rcount == -1)
			exit_helper(98, argv[1], 0);
		wcount = write(file_to, buffer, rcount);
		if (wcount == -1)
			exit_helper(99, argv[2], 0);
	}

	if (close(file_from) == -1)
		exit_helper(100, '\0', file_from);
	if (close(file_to) == -1)
		exit_helper(100, '\0', file_to);
	return (0);
}
