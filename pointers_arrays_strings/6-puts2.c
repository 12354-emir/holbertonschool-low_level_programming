#include "main.h"

/**
 * puts2 - imprime un caractere sur deux d'une chaine
 * @str: chaine a traiter
 *
 * Return: rien
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
