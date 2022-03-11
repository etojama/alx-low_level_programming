#include <stdio.h>

/** main -printing with putchar function
* * and putchar can only be used twice
*
* Return: returns zero in the end
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
