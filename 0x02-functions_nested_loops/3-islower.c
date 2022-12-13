#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character
 * @c: is the char to be checked
 * Returns: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
