#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
			putchar(num - 10 + 'a');
		num++;
	}
	putchar('\n');
	return (0);
}
