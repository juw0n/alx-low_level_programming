#include "main.h"
#include <stdio.h>
/**
 *_puts - print a string followed by a new line
 *@str: string to print
 *Return: Nothing
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
