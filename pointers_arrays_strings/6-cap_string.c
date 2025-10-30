#include "main.h"

/**
 * cap_string - met en majuscule la premiere lettre de chaque mot
 * @s: chaine a modifier
 *
 * Return: pointeur vers la chaine modifie
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		else
		{
			if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
			     s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			     s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			     s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			     s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
