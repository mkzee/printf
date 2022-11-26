#include "main.h"

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of chars to print
 */

int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}

	return (count);
}

