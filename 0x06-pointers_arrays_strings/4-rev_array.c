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
	int last_element = n - 1;

	while (j < last_element)
	{
		j++
	}
	for (i = last_element; i >= 0; i--)
	{
		int new_array;

		new_array = a[i];
		a[i] = a[j];
		a[j] = new_array;
		j--;
	}
}
