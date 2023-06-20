#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet *10,
* in lowercase, followed by a new line
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int z;

		for (z = 97; z < 123; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}