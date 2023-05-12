#include "main.h"

/**
 * factorial - returns the factorial of any  number inputed
 * @n: number to be  returned in  the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
