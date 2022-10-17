#include <stdlib.h>
#include <stdio.h>
/**
 * main - reverse alphabets
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a' ; --ch)
	{
		putchar(ch);
	}
	return (0);

}

