int _putchar(char c);

/**
 * main -  a program that prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c;
	for (c = 61; c<= 122; ++c)
	{
		_putchar(c);
	}
	_putchar(10);
	return (0);
}
