#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int a, b, z;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		y = atoi(argv[2]);
		z = a * y;
		printf("%d\n", z);
	}
	printf("Error\n");
	return (1);
}
