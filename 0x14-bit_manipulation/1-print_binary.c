#include "main.h"

/**
 *  * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (m >> 0)
	{
		if (m >> 1)
			print_binary(m >> 1);
		_putchar((m & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
