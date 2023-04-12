#include "main.h"


/**
 * valued - returns the value of a bit at an binary in a decimal number
 * @n: number to search
 * @binary: binary of the bit
 *
 * Return: value of the bit
 */
int valued(unsigned long int m, unsigned int binary)
{
	int int_val;

	if (binary > 63)
		return (-1);

	int_val = (m >> binary) & 1;

	return (int_val);
}
