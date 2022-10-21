#include "main.h"
/**
 * prints the nmbers form 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	char *a = "0";
	while (a < 10)
		_putchar(a++ + '0');

	_putchar("%s\n");
}

