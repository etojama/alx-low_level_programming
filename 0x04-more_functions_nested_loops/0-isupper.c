#include "main.h"

/**
* -isupper - checks if a number is upper
* @c: The integer used when the function is called
*
* Description: A function that identifies upper
* case character
* Return: 0 - SUCCESS
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
