#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: is the number to be checked.
* Return: the value of the last digit r.
*/

int print_last_digit(int n)
{
	int r;

	r = (n % 10);

	if (r < 0)
	{

		r = (-1 * r);

	}

	_putchar('0' + r);
	return (r);
}
