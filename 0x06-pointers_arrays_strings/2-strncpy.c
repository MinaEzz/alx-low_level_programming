#include "main.h"
/**
* _strncpy - copy a string
* @dest: function's parameter
* @src: function's parameter
* @n: function's parameter
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
		(n > i) ? dest[i] = src[i] : break;
	}
	dest[i] = '\0';

	return (dest);
}
