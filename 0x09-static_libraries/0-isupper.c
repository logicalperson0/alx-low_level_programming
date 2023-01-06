/**
 * _isupper - Shows 1 if the input is c
 * letter,uppercase. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _isupper(int c)
{
	int i;

	i = 65;

	while (i <= 90)
	{
		if (i == c)
		{
			return (1);
		}
		i++;
	}

	return (0);
}
