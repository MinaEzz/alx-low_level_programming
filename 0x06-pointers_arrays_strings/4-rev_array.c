#include "main.h"
/**
* reverse_array - revers array
* @a: function's parameter array
* @n: number of array element
*/
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;

	for (i = n - 1; i >= 0; i--, j++)
	{
		int new_array;

		new_array = a[i];
		a[i] = a[j];
		a[j] = new_array;
	}
}
