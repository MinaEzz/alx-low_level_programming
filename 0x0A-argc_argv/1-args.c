#include <stdio.h>
/**
*main - print a number, followed by a new line.
*@argc: function's param
*@argv: function's param
*Return: always 0 in c
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
