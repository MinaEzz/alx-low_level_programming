#include "main.h"
/**
* _isupper -  checks for uppercase character
* @c: parameter as character
* Return: 1 if uppercase 0 if not
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
