#include <stdio.h>
/**
*main -  program prints all single digit numbers of base 10
*starting from 0, followed by a new line
*Return: 0 (Hurray)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
