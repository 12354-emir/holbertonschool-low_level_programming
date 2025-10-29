#include "main.h"
#include <stdio.h>

/**
 * print_array - affiche n elements d'un tableau d'entiers
 * @a: tableau d'entiers
 * @n: nombre d'elements a afficher
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
