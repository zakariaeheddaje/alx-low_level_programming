#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '_';
	write(1, &c, 1);          /* Writes the character '_' to the standard output */
	write(1, "putchar\n", 8); /* Writes the string "putchar" followed by a newline */
	return (0);
}
