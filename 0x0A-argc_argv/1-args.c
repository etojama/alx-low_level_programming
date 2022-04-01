#include <stdio.h>

/**
 * main - prints program count
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for(i = 0; i < argc - 1; i++)
	{}

	printf("%d\n", i);
	return (0);
}
