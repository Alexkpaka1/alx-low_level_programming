/**
 * main -A program that prints unmber of the base 16 in lowercase
 * Return: Always return 0 SUCCESSFUL MGE
 */

#include <stdio.h>

int main(void)
{
	int a;
	char b;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
	}
	for (b = 'a' ; b <= 'f' ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
