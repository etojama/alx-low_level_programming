#include <stdio.h>
#include "main.h"

/**
* 0-isupper - checks if a number is upper
*
* Return: returns 1 if c is upper
*/

int _isupper(int c)
{
	char c;
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else {
		return (0);
	}
}
