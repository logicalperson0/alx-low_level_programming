#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: a ascii char
 *
 * Return: len of str
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
