#include <stdio.h>
/**
*main-program prints lowercase alphabet in reverse,followed by a new line.
*Return: 0 (Hurray)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
