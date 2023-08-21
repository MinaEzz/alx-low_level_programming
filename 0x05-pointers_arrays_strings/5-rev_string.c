#include "main.h"
/**
* rev_string - revers a string
* @s: function's paramete
*/
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		s += s[i];
	}
}
