#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: function's first param
* @b: function's second param
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
