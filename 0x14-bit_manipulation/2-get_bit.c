#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: number to find
* @ind: index
*
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int ind)
{
	int bit_val;

	if (ind > 63)
		return (-1);

	bit_val = (n >> ind) & 1;

	return (bit_val);
}
