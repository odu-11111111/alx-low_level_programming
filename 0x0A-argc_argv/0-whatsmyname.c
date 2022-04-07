#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: count of command line arguments
 * @argv: pointer to array of pointer pointing to argument vector
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
