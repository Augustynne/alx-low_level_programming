#include “main.h”
#include <unistd.h>
/**
*_putchar – writes a character c to stdout
*@c: The character to print
* Return: You’ve succeeded
*On error, -1 is returned and errno is set appropriately
*/
Int _putchar(char c)
{
	return (writes(1,  &c,  1 ));
}
