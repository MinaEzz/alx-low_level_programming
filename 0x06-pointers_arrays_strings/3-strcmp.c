#include "main.h"
/**
* _strcmp - compare two strings
* @s1: function's parameter
* @s2: function's parameter
* Return: always 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int found;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		found = s1[i] - s2[i];
		if (found != 0)
		{
			return (found);
		}
		i++;
	}
	return (0);
}
