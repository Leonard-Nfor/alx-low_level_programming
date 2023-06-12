#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entery point
 * @argc: argument count
 * @argv: argument vector
 * Return: The number of arguments
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
