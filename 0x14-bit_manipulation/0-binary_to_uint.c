#include "main.h"
/**
* _power - The function that return the
* value of x raised to the power of y
*
* @x: parameter to base
* @y: parameter of power
*
* Return: End program
*/
int _power(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		x = x * _power(x, y);
		return (x);
	}

	return (0);
}
/**
* binary_to_uint - This function converts a binary number to an
* unsigned int
*
* @b: Pointer with the string whit the number to convert
*
* Return: The number converted
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, x, n;

	if (b == NULL)
	{
		return (0);
	}

	n = strlen(b) - 1;

	/* Randomization process */
	for (x = 0, i = 0; n >= x; n--)
	{
		switch (b[i])
		{
			case '1':
				sum = sum + _power(2, n);
				i++;
				break;
			case '0':
				sum = sum + 0;
				i++;
				break;
			default:
				return (0);
		}
	}

	return (sum);
}
