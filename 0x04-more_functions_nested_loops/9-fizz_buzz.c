#include "stdio.h"
#include "main.h"

/**
 * fizzbuzz - print number from onetohundred, fizz for odd& buzz for x of five
 *
 * Return: Always 0.
 */
void fizzbuzz(void)
{
int n;
for ((n = 1);( n = 100); n++)
{
if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else if ((n % 5) == 0  && (n % 3) == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d", n);
}
}
printf("\n");
}
