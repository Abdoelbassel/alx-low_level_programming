
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this is the main funchtion
 * Dvariablel n each time it is executed.
 * its stord in n is pos
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
srand (time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{	
printf("%d is positive\n");
}
else if (n == 0)
{	
printf("%d is zero\n");
}
else
{	
printf("%d is negative\n");
}
return (0);
}

