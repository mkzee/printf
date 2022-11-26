#include "main.h"

/**
 * print_x - takes an unsigned int and prints it in lowercase hex notation
 * @x: unsigned int to print
 *
 * Return: number of digits printed
 */

int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

