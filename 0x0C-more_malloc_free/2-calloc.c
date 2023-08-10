#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@neleme: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int neleme, unsigned int size)
{
	char *block;
	unsigned int i;

	if (neleme == 0 || size == 0)
		return (NULL);
	block = malloc(neleme * size);
	if (block != NULL)
	{
		for (i = 0; i < (neleme * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
