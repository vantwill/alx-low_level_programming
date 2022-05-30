/*
 * File: 2-append_text_to_file.c
 * Auth: Tewolde
 */

#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, fwrite, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	fwrite = write(file, text_content, i);

	if (file == -1 || fwrite == -1)
		return (-1);

	close(file);
	return (1);
}


