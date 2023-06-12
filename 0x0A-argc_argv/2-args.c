#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entery point
 * @argc: argument count
 * @argv: argument vector
 * Return: All argument
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
