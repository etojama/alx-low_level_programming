#include <stdio.h>

/**
* main - print number in ascending order
* and putchar can only be used like 4 times
*
* Return: returns 0 at the end
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	if (i < 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
	
}
