/**
 * _isalpha - Shows 1 if the input is a
 * letter,uppercase or lowercase. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _isalpha(int c)
{
	int ualpha;
	int lalpha;

	ualpha = 65;
	lalpha = 97;

	while (ualpha < 91)
	{
		if (c == ualpha)
		{
			break;
		}
		ualpha++;
	}
	while (lalpha < 123)
	{
		if (c == lalpha)
		{
			break;
		}
		lalpha++;
	}
	if (ualpha == c)
		return (1);
	else if (lalpha == c)
		return (1);
	else
		return (0);
}
