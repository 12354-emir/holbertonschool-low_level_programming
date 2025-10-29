#include "main.h"

/**
 * _atoi - Convertit une chaine de caracteres en entier
 * @s: La chaine convertir
 *
 * Return: L'entier correspondant, ou 0 si aucun chiffre
 */
int _atoi(char *s)
{
	int i = 0, signe = 1;
	unsigned int nb = 0;

	while (s[i] == ' ')
		i++;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			signe *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
			nb = nb * 10 + (s[i] - '0');
		else if (nb > 0)
			break;
		i++;
	}

	return (nb * signe);
}
