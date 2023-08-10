#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @l1: The first letter string.
 * @l2: The second letter string.
 * @n: The maximum number of bytes of l2 to concatenate to l1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *l1, char *l2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (l1 == NULL)
		l1 = "";

	if (l2 == NULL)
		l2 = "";

	for (index = 0; l1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; l1[index]; index++)
		concat[len++] = l1[index];

	for (index = 0; l2[index] && index < n; index++)
		concat[len++] = l2[index];

	concat[len] = '\0';

	return (concat);
}
