#include "main.h"
#include <stdio.h>
/**
 * funcion strlen
 * Return : length of string
 */
int _strlen(char *s)
{
	int x = 0;
	
	while (s[x] != '\0')
	{
		x++;
	}
	return(x);
}




