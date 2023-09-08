#include <stdio.h>
/**
*main - prints name followed by a new line
*@argc: function's param
*@argv: function's param
*Return: always 0 in c
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
