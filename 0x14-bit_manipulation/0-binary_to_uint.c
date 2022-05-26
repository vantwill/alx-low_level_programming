/*
 * Auth: Tewolde Gebrehiwot
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int conv;

	if (b == '\0')
		return (0);

	for (conv = 0; b[conv];)
		conv++;

	for (conv -= 1; conv >= 0; conv--)
	{
		if (b[conv] != '0' && b[conv] != '1')
			return (0);

		num += (b[conv] - '0') * mult;
		mult *= 2;
	}

	return (num);

}

