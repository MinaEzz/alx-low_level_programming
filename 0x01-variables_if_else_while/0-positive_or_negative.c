#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - check if n is positive, negative or equal 0
* Return: alwys 0 in c language
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		print("%d is negative\n", n);
	}
	return (0);
}
