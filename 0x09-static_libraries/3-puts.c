#include "main.h"
#include <stdio.h>
/**
 * _puts - function to put character
 * @str: parameter for the function _puts
 */

void _puts(char *str)
{
	for (; *str !=  '\0' ; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
