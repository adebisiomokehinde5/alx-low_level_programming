#include "main.h"
/**
 * _isalpha - function to use for the check if c is a lower case/uppercase
 * @c: is the int for the argument
 * Return:0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
