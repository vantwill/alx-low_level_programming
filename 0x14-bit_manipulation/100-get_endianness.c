/*
 * File: 100-get_endianness.c
 * Auth: Tewolde Gebrehiwot
 */

#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */

int get_endianness(void)
{

	int kut = 1;
	char *endian = (char *)&kut;

	if (*endian == 1)
		return (1);

	return (0);

}


