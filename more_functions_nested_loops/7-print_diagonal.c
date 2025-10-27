#include "main.h"

/**
 * print_diagonal - trace une ligne diagonale dans le terminal
 * @n: nombre de fois où le caractère '\' doit être affiché
 *
 * Return: rien
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
