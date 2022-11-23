#include "main.h"

/**
 * _pow - finds the exponent of a number
 * @base: base num
 * @exponent: pow
 * Return: base ^ exponent
 */
unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exponent; i++)
		ans *= base;

	return (ans);
}
