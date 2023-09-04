#include "main.h"
/**
* factorial - function that return a factorial of given num
* @n: function's parameter
* Return: factorial of a number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* indicates an error */
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
