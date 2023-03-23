#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: Int paramenter to be checked
 * Description: Part of the code
 * Return: 1 if Uppercase. 0 if Lowercase. 0 to close the program
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}

	return (0);
}
