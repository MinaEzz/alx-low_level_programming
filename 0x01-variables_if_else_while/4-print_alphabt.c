#include <stdio.h>
/**
* main - print lowercase alphapet except q and e
* Return: always 0 in C
*/
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n == 101 || n == 113)
			continue;
		putchar(n);
	}
	putchar('\n');
	return (0);
}
