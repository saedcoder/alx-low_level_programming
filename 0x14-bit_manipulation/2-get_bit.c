#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;

	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
