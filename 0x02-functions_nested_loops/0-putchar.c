#include "main.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char main[4] = {'M', 'A', 'I', 'N'};
	unsigned int c;

	for (c = 0; c < sizeof(main); c++)
	{
		_putchar(main[c]);
	}
_putchar('\n');
return (0);
}
