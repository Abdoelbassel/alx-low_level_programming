#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase, followed by a new line.
 * Description: The character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
