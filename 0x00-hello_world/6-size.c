#include<stdio.h>

/**
 * main - Entry
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intergerType;
	float floatType;
	long int longintegerType;
	long long int longlongintergerType;
	char charType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of int: %d byte(s)\n", sizeof(intergerType));
	printf("size of long int: %d byte(s)\n", sizeof(longintegerType));
	printf("size of long long int: %d byte(s)\n", sizeof(longlongintergerType));
	printf("size of float: %d byte(s)\n", sizeof(floatType));
	return (0);
}

