#include "main.h"

/**
 * _atoi - convertit une chaine de caracteres en entier
 * @s: chaine de caracteres à convertir
 * Return: entier correspondant ou 0 si pas de chiffres
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, number = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}

	return (number * sign);
}
