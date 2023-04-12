#include "main.h"



/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	int i, bit = 0;
	unsigned long int binary;

	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;

		if (binary & 1)
		{
			_putchar('1');
			bit++;
		}
		else if (bit)
			_putchar('0');
	}
	if (!bit)
		_putchar('0');
}

