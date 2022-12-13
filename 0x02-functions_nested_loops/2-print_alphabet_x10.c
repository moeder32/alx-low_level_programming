#include "main.h"
/**
 * print_alphabet - that prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int ten;
	char m;

	for (ten = 0; ten <= 9; ten++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}

}
