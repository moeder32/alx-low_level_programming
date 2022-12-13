#include "main.h"
/**
 * main - print alphabet
 * Description: write a function that prints an aplhabet,in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
void print_alphabet(void);

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
