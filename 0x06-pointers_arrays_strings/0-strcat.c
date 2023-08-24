#include "main.h"
/**
* *_strcat - concatenate src to dest
* @dest: function's paramete which is a string
* @src: function's parameter which is a string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	for (i = 0; dest[i] > 0; i++)
	{
		while (src[j] > 0)
		{
			dest[i + j] = src[j];
			j++;
		}
	}
	dest[i + j] = '\0';

	return (dest);
}
