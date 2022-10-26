#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev
 * Return:nothing
 */
void print_rev(char *s)
{
	int fr = strlen(s);

	while (fr--)
	{
		putchar(*(s + fr));
		putchar(10);
	}
}


