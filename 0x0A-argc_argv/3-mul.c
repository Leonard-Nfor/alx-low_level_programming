#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entery point
 * @argc: argument count
 * @argv: Argument vector
 * Return: Return the multiple
 */
int main(int argc, char *argv[])
{
	int val1;
	int val2;
	int mul;

	if (argc >= 2)
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		mul = val1 * val2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
