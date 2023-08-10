#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *blk;
	int i, j = 0;

	if (min > max)
		return (NULL);
	blk = malloc(sizeof(*blk) * ((max - min) + 1));
	if (blk != NULL)
	{
		for (i = min; i <= max; i++)
		{
			blk[j] = i;
			j++;
		}
		return (blk);
	}
	else
		return (NULL);

}
