#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to compare
 * @accept: of the character c in the string s
 *
 * Return:  the number of bytes in the initial segment:
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, ap = 0, at = 0, j = 0, cont = 0;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j) && !ap)
		{
			if (*(s + i) == *(accept + j))
			{
				ap = 1;
				break;
			}
			j++;
		}
		if (ap)
		{
			at = 0;
			j = 0;
			while (*(accept + j))
			{
				if (*(s + i) == *(accept + j))
				{
					cont++;
					at = 1;
				}
				j++;
			}
			if (!at)
				return (cont);
			}
				i++;
			}

			return (cont);
		}
		i++;
		}
		return (cont);
	}
}
