#include "main.h"

/**
 * _strcpy - copie la chaine pointee par src dans dest
 * @dest: buffer de destination
 * @src: chaine source
 *
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
