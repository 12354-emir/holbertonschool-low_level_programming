#include "main.h"

/**
 * puts2 - Affiche un caractere sur deux d'une chaine
 * @str: chaine a afficher
 *
 * Description: Cette fonction affiche un caractere sur deux
 * à partir du debut de la chaine passee en  parametre, puis
 * ajoute un saut de ligne a la fin.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
