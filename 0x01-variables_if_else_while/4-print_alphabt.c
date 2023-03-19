#include <stdio.h>
/**
 * main - print the alphabet but exlude e and q
 * Description: this program will print all  alphabets except e and q
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar (ch);
}
}
putchar('\n');
return (0);
}
