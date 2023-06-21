#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * i = row, j = column, r = multiplying i*j
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
int i = 0, j = 0, r;
while (i <= 9)
{
while (j <= 9)
{
r = i * j;
if (r < 10)
{
if (j != 0)
_putchar(' ');
_putchar('0' + r);
}
else
{
_putchar('0' + r / 10);
_putchar('0' + r % 10);
}
if (j == 9)
break;
_putchar(',');
_putchar(' ');
j++;
}
_putchar('\n');
j = 0;
i++;
}
}
