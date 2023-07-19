#include "main.h"
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
void positive_or_negative(int i)
{

	if (i < 0)
	{

		printf("%d is %s\n",i, "negative");
	}
		else if (i > 0)
		{

			printf("%d is %s\n", i, "positive");
		}
		else
		{

			printf("%d is %s\n", i, "zero");
		}

	return;
}
