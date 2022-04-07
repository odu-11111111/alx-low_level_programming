#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: count of command line arguments
 * @argv: pointer to array of pointer pointing to argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
