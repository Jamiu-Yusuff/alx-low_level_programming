#include "main.h"
/**
*_memcpy - function copies memory location
*@dest: memory copied from
*@src: location copied to
*@n: number of bytes
*Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
