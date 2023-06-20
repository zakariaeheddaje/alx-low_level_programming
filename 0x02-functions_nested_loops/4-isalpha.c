#include "main.h"

/**
 * _islower - Check function
 * @c: A parameter to be checked
 * Description:function that checks for lowercase character
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
