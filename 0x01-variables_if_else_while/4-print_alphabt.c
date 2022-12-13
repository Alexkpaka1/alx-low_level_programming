/**
 *main - Entry point
 *Return: Always 0
 */

#include <stdio.h>

int main(void)
{
	int j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		if (j != 'e' && j != 'q')
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
