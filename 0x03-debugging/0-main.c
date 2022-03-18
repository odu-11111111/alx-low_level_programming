#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *  * main - function to printf random number
 *   * Return: return 0
 *    */
int main(void)
{
        int n = 0;
	
	postive_or_negative(n);
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
