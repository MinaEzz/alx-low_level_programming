#include <stdio.h>
/**
* main - print sizeof
* Return: alwys 0 in c language
*/
int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("\nSize of an int: %zu byte(s)", sizeof(int));
	printf("\nSize of a long int: %zu byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %zu byte(s)", sizeof(long long int));
	printf("\nSize of a float: %zu byte(s)", sizeof(float));
	return (0);
}
