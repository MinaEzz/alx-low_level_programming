#include "main.h"
/**
* *_strcat - concatenate src to dest
* @dest: function's paramete which is a string
* @src: function's parameter which is a string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int j;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';

	return (dest);
}
