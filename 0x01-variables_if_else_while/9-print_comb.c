#include <stdio.h>
/**
* main - print combinations of single-digit numbers
* Return: alwys 0 in c language
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n')
	return (0);
}
