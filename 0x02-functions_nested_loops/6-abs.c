#include "main.h"
/**
 * _abs - compute tthe absolute value
 * Return: Always 0 (Success)
 */

int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
