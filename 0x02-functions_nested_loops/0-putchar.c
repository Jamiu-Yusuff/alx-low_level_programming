#include "main.h"

/**
 * main - A progam to print
 * _putchar
 * REturn: Always 0 (Success)
 */

int main(void)
{
	char ins[] = "_putchar";
	int i = 0;
	while (ins[i] != '\0')
	{
		_putchar(ins[i]); i++;
	}
	_putchar('\n');

	return 0;
}
