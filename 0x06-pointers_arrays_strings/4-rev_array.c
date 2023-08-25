#include "main.h"
/**
* reverse_array - revers array
* @a: function's parameter array
* @n: number of array element
*/
void reverse_array(int *a, int n)
{
	int i;
	int last_element = n - 1;
	int new_array[n];
	int j = 0;

	for (i = last_element; i >= 0; i--, j++)
	{
		new_array[j] = a[i];
		a[i] = a[j];
		a[j] = new_array[j];
	}
}
