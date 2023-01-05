#include "main.h"
/**
 * compare - 2 str for identical
 * @d1: parameter for s1
 * @d2: parameter for s2
 * @x: parameter for counting s1
 * @y: parameter for counting s2
 * Return: 1 for identical
 */
int compare(char *d1, char *d2, int x, int y)
{
	if (d2[y] == '*' && d2[y + 1] != '\0' && d1[x] == '\0')
		return (0);
	else if (d1[x] == '\0' && d2[y] == '\0')
		return (1);
	else if (d1[x] == d2[y])
		return (compare(d1, d2, x + 1, y + 1));
	else if (d2[y] == '*')
		return (compare(d1, d2, x, y + 1) || compare(d1, d2, x + 1, y));
	return (0);
}
/**
 * wildcmp - function that compares two strings and returns 1
 * if the strings can be considered identical
 * @s1: the parameter
 * @s2: the parameter
 * Return: 1 for identical
 */
int wildcmp(char *s1, char *s2)
{
	return (compare(s1, s2, 0, 0));
}
