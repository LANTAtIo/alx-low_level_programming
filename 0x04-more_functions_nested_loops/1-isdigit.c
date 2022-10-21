#include "main.h"

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
	{
		y = 1;
	}
	return (y);
}
