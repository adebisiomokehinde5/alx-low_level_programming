#include <stdio.h>
/**
 * main - print alphabet in reverse order
 * Description: using the puchar function
 * Return: 0
 */
int main(void)

{

	char c;

	for (c = 'z'; c >= 'a'; c--)

	{

		putchar(c);

	}

	putchar('\n');

	return (0);

}
