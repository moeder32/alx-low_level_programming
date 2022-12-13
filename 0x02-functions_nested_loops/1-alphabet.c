#include "main.h"
/**
 * main - print alphabet
 * Description: a function that prints the alphabet, in lowercase
 * followed by a new line
 * Return; Always 0(success)
 */
void print_alphabet(void)

{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);

	_putchar('\n');
	return (0);
}
