#include<stdio.h>
#include<stdlib.h>
/**
 * main - The entery point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: The name of the program
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
