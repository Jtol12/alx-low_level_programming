#include "main.h"

/**
 * get_bit - returns the value of a bit at an integer in a decimal number
 * @n: number to search
 * @integer: integer of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int m, unsigned int integer)
{
	int bit_val;

	if (integer > 63)
		return (-1);

	bit_val = (m >> integer) & 1;

	return (bit_val);
}
