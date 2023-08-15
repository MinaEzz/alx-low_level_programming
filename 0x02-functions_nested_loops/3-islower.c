#include "main.h"
/**
* _islower - print lowercase
* @c: is the character in lowercase
* Return: alwys 0 in c language
*/
int _islower(int c)
{
	if (c <= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
