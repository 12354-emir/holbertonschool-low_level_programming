#include "main.h"

/**
 * _isdigit - Verifie si le caractere est un chiffre
 * @c: caractere a�tester
 *
 * Return: 1 si chiffre, 0 sinon
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
