#include "main.h"

/**
 * get_endianness - Determines the endianness of the architecture.
 *
 * Description: Returns 1 if the architecture is little endian, or 0 if it is big endian.
 * Section header: The header of this function is holberton.h
 *
 * Return: 1 for little endian, 0 for big endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
