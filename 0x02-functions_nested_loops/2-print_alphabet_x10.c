#include "main.h"
/**
* print_alphabet_x10 - print lowercase 10 times
* Return: alwys 0 in c language
*/
void print_alphabet_x10(void)
{
	int i;
	int h;

	for (i = 1; i <= 10; i++)
	{
		for (h = 97; h <= 122; h++)
		{
			_putchar(h);
		}
		_putchar('\n');
	}
}
