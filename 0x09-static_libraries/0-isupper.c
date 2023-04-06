#include "main.h"
#include <stdio.h>

/**
 *  _isupper - define if a character is uppercase
 *  @c: charater
 *   Description: Prints the alphabet with _putchar
 *   Return: 1 or 0
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
