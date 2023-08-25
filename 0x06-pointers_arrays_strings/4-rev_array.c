#include "main.h"
/**
* reverse_array - revers array
* @a: function's parameter array
* @n: number of array element
*/
void reverse_array(int *a, int n)
{
	int i;
	int new_array[n];
	int j = 0;

	for (i = n - 1; i >= 0; i--, j++)
	{
		new_array[j] = a[i];
	}
}
