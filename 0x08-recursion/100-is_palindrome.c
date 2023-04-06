#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);


/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks for a recursive palindrome of a string
 * @s: string to confirm reverse
 *
 * Return: 1 if string is confirmed to be a palindrome, 0 if otherwise.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * check_pal - This checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: confirms length of the string
 *
 * Return: 1 if palindrome, 0 if otherwise
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
