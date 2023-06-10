#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function checks if string is a palindrome.
 * @s: string to be reversed.
 *
 * Return: 1 on Success and 0 on Error.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - this returns the length of the string.
 * @s: th length of string to be calculated.
 *
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - this checks the character for the palindrome recursively.
 * @s: the string that is checked for palindrome
 * @i: iterator
 * @len: the length of the string.
 *
 * Return: 1 on Success (pallindrome), 0 on Error.
 */

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}

