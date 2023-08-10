#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @ab: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int ab)
{
	void *bk;

	bk = malloc(ab);
	if (bk == NULL)
		exit(98);
	return (bk);
}
