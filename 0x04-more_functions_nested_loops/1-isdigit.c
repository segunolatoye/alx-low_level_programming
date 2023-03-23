#include "main.h"
/**
 * _isdigit - Check if entry is digit
 * @c: Paramenter c is checked
 * Description: function that checks for a digit (0 through 9).
 * Return: 1 if digit. 0 If otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
