#include "main.h"
/**
 * print_alphabet_x10 - My Function
 * Description - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 1;

	do {
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	} while (i <= 10);
}

