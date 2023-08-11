#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
		printf("is positive");
	} else if (n == 0)
	{
		printf("is zero");
	} else if (n < 0)
	{
		print("is negative");
	}
	return (0);
}
