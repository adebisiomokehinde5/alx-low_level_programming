#include "main.h"

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 * palindrome
 */


int is_palindrome(char *s) 
{
    int len = find_strlen(s);
    int i;
    
    if (len == 0) {
        return 1;
    }
    
    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) 
		{
            return 0;
        }
    }
    
    return 1;
}