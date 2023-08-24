#include "main.h"
/**
* _strncat - concat two strings
* @dest: function's parameter string
* @src: function's parameter string
* @n: function's paramete number of string
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int j;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		if (n > 0)
		{
			dest[length] = src[j];
		}

	}
	dest[length] = '\0';
	return (dest);
}
