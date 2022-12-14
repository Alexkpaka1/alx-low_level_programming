
/**
 * print_alphabet - Entry
 * Return: Always 0
 */

#include "1-alphabet.c"

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
