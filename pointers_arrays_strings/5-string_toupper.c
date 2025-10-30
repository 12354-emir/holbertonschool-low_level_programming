#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres minuscules d'une chaine en majuscules
 * @s: La chaine a modifier
 *
 * Return: Pointeur vers la chaine modifie
 */
char *string_toupper(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        i++;
    }

    return (s);
}
