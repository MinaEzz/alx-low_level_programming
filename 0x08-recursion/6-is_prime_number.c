#include "main.h"
/**
* is_prime_number - checks if number is prime or not
* @n: function's parameter
* Return: 1 if n is prime number and 0 if not
*/
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	is_prime_number(n);
}
