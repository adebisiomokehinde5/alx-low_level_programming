#include <stdio.h>
/**
* main - print allsingle digit numbers following a new line
* Description:using the main function
* Return: 0
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar (n);
}
putchar ('\n');
return (0);
}
