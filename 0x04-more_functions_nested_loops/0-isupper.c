/**
 * _isupper - check for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

#include "main.h"

int _isupper(int c)
{
	return (c >= 'A' && c <= 'z');
}
