#include "main.h"

/* 
 * leet - encode une chaine de caracteres en 1337
 * Remplace a/A->4, e/E->3, o/O->0, t/T->7, l/L->1
 * Retourne la chaine modifie
 */
char *leet(char *s)
{
	int i, j;
	char lettres[] = "aAeEoOtTlL";
	char chiffres[] = "4433007711";

	for (i = 0; s[i]; i++)
		for (j = 0; lettres[j]; j++)
			if (s[i] == lettres[j])
			{
				s[i] = chiffres[j];
				break;
			}
	return (s);
}
