#include "main.h"
#include <unistd.h>

/**
*_putchar - writes the character c to stand out 
*the character to print
*
*Return on Success 1
on error, -1 is returned and error is set appropriately
*/
int _putchar(char c)
{
	return(write(1, &c, 1));		
}
