#include "main.h"

/**
 * _strncpy - copie une chaine de caracteres
 * @dest: chaine de destination
 * @src: chaine source
 * @n: nombre maximum de caracteres à copier
 *
 * Return: pointeur vers la chaine de destination dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
