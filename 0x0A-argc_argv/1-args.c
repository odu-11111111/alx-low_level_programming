#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * main -  program that prints the number of arguments passed into it
 * @argc: count of command line arguments
 * @argv: pointer to array of pointer pointing to argument vector
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
