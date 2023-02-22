#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints lowercas
 * hexadecimal
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
