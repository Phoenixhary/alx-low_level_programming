#include "main.h"
/**
 * factorial - returns the factoria of a given number
 * @n: number
 * Return: factorial or -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
