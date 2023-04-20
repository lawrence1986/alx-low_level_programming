#ifndef _VARIADIC_H_
#define _VARIADIC_H_

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: 0 on success.
 *         -1 on error.
 */
int _putchar(char c);

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers, separated by a string.
 * @separator: The separator string.
 * @n: The number of integers to print.
 * @...: A variable number of integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings, separated by a string.
 * @separator: The separator string.
 * @n: The number of strings to print.
 * @...: A variable number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - Prints anything, based on a format string.
 * @format: A string of format specifiers.
 * @...: A variable number of arguments to print.
 *
 * Description: The format string can contain any of the following specifiers:
 *              c - char
 *              i - integer
 *              f - float
 *              s - string
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...);

#endif
