#include <stdio.h>
/**
* main - print odd numbers from 0 to 10
* Return: alwys 0 in c language
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
