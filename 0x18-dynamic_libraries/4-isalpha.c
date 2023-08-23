#include "main.h"
/**
 * _isalpha - print the alphabet in lowercase
 * Description: The chracter to print
 * @c: is the char
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
