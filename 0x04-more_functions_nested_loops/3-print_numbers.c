#include "main.h"

/**
 * print_numbers - check for digits
 * 0 through 9
 * Returns: Always 0 (Success)
 */
void print_numbers(void)

{
	int c;
	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
