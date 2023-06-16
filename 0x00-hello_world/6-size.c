#include<stdio.h>
/**
 *main - program that prints the size of various types
 *Return: 0 (Successful)
*/
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n" sizeof(float));
	return (0);
}
