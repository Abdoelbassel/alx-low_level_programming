#include "main.h"
/**
 * _islower - print the alphabet in lowercase
 * Description: The chracter to print
 * @c: is the char
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
