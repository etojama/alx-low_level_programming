#include "main.h"
/**
* print_alphabet - a function that prints alphabets in lowercase
*
* Return: Always 0
*/

void print_alphabet(void)
{
	char a = 97;

	while (a < 123)
	{	_putchar(a);
		a++;
	}
	_putchar(10);

}
