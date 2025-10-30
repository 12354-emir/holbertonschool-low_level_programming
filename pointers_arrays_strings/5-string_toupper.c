#include "main.h"

/**
 * string_toupper - convertit toutes les lettres minuscules d'une chaine en majuscules
 * @s: pointeur vers la chaine a modifier
 * Return: pointeur vers la chaine modifie
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
