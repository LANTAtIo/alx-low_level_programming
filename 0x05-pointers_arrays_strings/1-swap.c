#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * nothing return
 */
void swap_int(int *a, int *b)
{
	int zero = *a;
	*b = *a;
	*a = zero;
}

