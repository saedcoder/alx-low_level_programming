#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates an array
 * @array: is an array
 * @size: is the size
 * @action: is something
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
