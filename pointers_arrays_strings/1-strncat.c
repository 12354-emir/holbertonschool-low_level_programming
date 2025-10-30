#include "main.h"

/**
 * _strncat - concatène deux chaines avec une limite de n caracteres
 * @dest: chaine de destination
 * @src: chaine source
 * @n: nombre maximum de caracteres a ajouter
 *
 * Return: pointeur vers la chaine resultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

