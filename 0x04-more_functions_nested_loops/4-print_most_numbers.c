#include "main.h"
/**
 * print_most_numbers - Print only few numbers
 * Description: Function to omit some numbers 
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	_putchar('\n');
}
