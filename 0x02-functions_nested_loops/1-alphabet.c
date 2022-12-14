
/**
 * print_alphabet - Entry
 * Return: Always 0
 */

#include <stdio.h>

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
