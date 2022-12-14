#include "main.h"
/**
 *  print_last_digit - prints the last digit
 *  @b: the number
 *  Return: value of the last digit
 */
int print_last_digit(int b)
{
	int ld = b % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
