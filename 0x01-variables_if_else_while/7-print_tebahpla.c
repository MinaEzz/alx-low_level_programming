#include <stdio.h>
/**
* main - print lowercase alphapet in reverse
* Return: alwys 0 in c language
*/
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
