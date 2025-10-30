#include "main.h"

/**
 * _strcmp - compare deux chaines de caracteres
 * @s1: premiere chaine
 * @s2: deuxieme chaine
 *
 * Return: 0 si les chaines sont egales,
 *         une valeur positive si s1 > s2,
 *         une valeur négative si s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
