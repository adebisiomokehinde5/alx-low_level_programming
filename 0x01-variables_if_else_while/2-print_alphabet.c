#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase, followed by a new line
* Description: using the main function ..
*this program " prints alphabets alone"
* Return: 0
*/
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)

{
	putchar(ch);
}

putchar('\n');
return (0);
}
