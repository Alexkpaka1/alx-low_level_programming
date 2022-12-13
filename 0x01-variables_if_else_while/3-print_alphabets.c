/**
 * main - Entry
 * Return: Always
 */

#include <stdio.h>

int main(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	for (a = 'A' ; a <= 'Z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
