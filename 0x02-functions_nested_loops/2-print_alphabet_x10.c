#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase
 * Description: The chracter to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n <= 9)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		n++;
	}
}
