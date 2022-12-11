#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char working;
	int good;
	long day;
	long long dancer;
	float gym;

	printf("Size of a char: %lu byte(s)\n", sizeof(working));
	printf("Size of an int: %lu byte(s)\n", sizeof(good));
	printf("Size of a long int: %lu byte(s)\n", sizeof(day));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(dancer));
	printf("Size of a float: %lu byte(s)\n", sizeof(gym));

	return (0);
}
