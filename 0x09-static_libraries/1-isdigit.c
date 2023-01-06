/**
 * _isdigit - Shows 1 if the input is c
 * letter,uppercase. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _isdigit(int c)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		if (i == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
