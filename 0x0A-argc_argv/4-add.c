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
	int sum = 0;
	int i;
	char j;
	int k = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = '0'; j <= '9';  j++)
		{
			if (**(argv + i) != j)
				k += 1;
		}
		if (k == 10)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			j = '0';
			k = 0;
		}
	}
	printf("%d\n", sum);
	return (0);
}
