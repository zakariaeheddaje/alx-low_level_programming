#include <stdio.h>

/**
 * main - Prints  all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	for (x = 48; x < 57; x++)
	{
		for (y = 49; y < 58; y++)
		{
			if (x != y)
			{
				if (y > x)
				{
					putchar(x);
					putchar(y);
					if (x != 56 || y != 57)
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
