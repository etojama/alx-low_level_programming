#include <stdio.h>

/**
* main - prints all possible different
* combinations of three digits
*
* Return: -returns zero at the end
*/

int main(void)
{
	int i, j, k;

	for(i = 0; i < 10; i++)
	{
		for(j = 1; j < 10; j++)
		{
			for(k = 2; k < 10; k++)
			{
				if (k > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if(i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
