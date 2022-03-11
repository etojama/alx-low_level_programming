#include <stdio.h>

/**
* main - print alphabets with putchar function
* and putchar will be used thrice
*
* Return: return will be 0
*/
int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for(ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
