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

	for (i = 0; src[i] != '\0'; i++)
	{
		(n > i) ? dest[i] = src[i] : break;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}

	return (&dest[0]);
}
