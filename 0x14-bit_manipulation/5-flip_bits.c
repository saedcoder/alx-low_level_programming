#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped to convert
 *             one number to another.
 * @n: The first number.
 * @m: The second number to compare.
 *
 * Return: The number of different bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}

	return (count);
}
