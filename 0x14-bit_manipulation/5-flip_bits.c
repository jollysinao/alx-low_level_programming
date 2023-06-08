#include "main.h"

/**
 * flip_bits - counts the number of bits to change from a number to another
 * @n: number one
 * @y: number two
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int y)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int execlusive = n ^ y;

	for (i = 63; i >= 0; i--)
	{
		current = execlusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
