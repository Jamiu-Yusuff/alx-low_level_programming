#include "main.h"
/**
 * _puts - prints a string,
 * followed by a newline
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
