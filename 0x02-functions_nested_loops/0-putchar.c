#include "main.h"
/**
 *main - Prints _putchar followed by newline
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char X[] = "_putchar";
int i;
for (i = 0; i <= 7; i++)
{
	_putchar(X[i]);
}
_putchar('\n');
return (0);
}
