#include "main.h"

/**
 * clear_bit - Sets a bit at a given index to 0.
 * @n: A pointer to the number.
 * @index: The index to set the bit at - indices start at 0.
 *
 * Return: 1 if successful, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
