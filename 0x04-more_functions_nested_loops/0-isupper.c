#include "main.h"

/**
* 0-isupper - checks if a number is upper
*
* Return: returns 1 if c is upper
*/

int _isupper(int c)
{
	
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
