#include "main.h"

/**
 *_strcat - Concatenates the string pointed to by @sr
 * @dest: A pointer to the string to be concatenated upon.
 * @src: String to be concatenated upon
 * Return: A pointer to the destination string @dest.   strcat - Concatenate
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
