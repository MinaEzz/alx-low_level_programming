#include "main.h"
/**
* _sqrt_recursion - function that returns the natural square root of a num
* @n: function's parameter
* Return: sqrt of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i = 1;
		int result = 1;

		if (result <= n)
		{
			i++;
			result = i * i;
		}
		return (_sqrt_recursion(result - 1));
	}
}
