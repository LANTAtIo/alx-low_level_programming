#include<stdio.h>
/**
 * main - combinaison of single-digit numbers
 * Return: Always (0) (Success)
 */

int main(void)
{
	char x;

	for (x= '0'; x <= '9'; x++)
	{
		putchar("%d", x);
	}
	return (0);
}
