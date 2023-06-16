#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char y;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (y = 97; y < 103; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}