#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("Size of char: %d byte(s)\n", Sizeof(char));
	printf("Size of an int: %d byte(s)\n", Sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
