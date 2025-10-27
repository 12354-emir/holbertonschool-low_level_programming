#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivis d'un retour à la ligne
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0'); /* Convertit i en caractere ASCII */
	}

	_putchar('\n'); /* Retour a la ligne la fin */
}
