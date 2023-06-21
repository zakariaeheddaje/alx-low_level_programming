#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	long int array[50];

	array[0] = 1;
	array[1] = 2;
	printf("%ld, %ld, ", array[0], array[1]);

	for (n = 2; n < 50; n++)
	{
		array[n] = array[n - 1] + array[n - 2];
		if (n == 49)
			printf("%ld\n", array[n]);
		else
			printf("%ld, ", array[n]);
	}
	return (0);
}
