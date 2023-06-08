#include "main.h"

/**
 * set_bit - sets the value of a bit of given index to 1
 * @n: pointer of an unsigned long int to change
 * @index: index of the bit
 *
 * Return: 1 if it is successful, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
