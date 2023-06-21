#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 5) == 0 || (x % 3) == 0)
			sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
