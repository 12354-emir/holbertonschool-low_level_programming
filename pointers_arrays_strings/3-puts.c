#include "main.h"

/**
 * _puts - affiche une chaine de caracteres suivie d'un saut de ligne
 * @str: chaine a  afficher
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
