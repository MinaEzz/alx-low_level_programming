#include "main.h"
/**
* print_alphabet - print lowercase alphapet
* Return: alwys 0 in c language
*/
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
