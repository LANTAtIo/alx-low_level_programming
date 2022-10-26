#include "main.h"
#include <stdio.h>
/**
 * puts - prints a string
 * @str: string to print
 * Return :Always 0
 */
void _puts(char *str)
{
	int kp = 0;

	while (*(str + kp) != '\n')
	{
		putchar(*(str + kp));
		kp++;
	}
	putchar(10);
}

