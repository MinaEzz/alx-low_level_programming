#include "main.h"
/**
* _isdigit - checks for a digit (0 through 9)
* @c: function's paramete
* Return: 1 if it is digit between 0 and 9 and 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
