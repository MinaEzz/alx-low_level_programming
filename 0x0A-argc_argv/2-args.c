#include <stdio.h>
/**
*main - prints all arguments it receives
*@argc: function's parameter
*@argv: function's parameter
*Return: always 0 in c
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
