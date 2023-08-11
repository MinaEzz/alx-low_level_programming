#include <stdio.h>
/**
* main - print lowecase alphapet
* Return: alwys 0 in c language
*/
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
