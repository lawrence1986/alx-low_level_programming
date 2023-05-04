#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63, figure = 0;
	unsigned long int recent;

	while (i >= 0)
	{
		recent = n >> i;

		if (recent & 1)
		{
			_putchar('1');
			figure++;
		}
		else if (figure)
			_putchar('0');

		i--;
	}

	if (!figure)
		_putchar('0');
}
