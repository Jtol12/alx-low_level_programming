/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int m, unsigned int index)
{
	int integer;

	if (index > 63)
		return (-1);

	integer = (m >> index) & 1;

	return (integer);
}
