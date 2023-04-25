#include "stdio.h"
#include "main.h"

/**
 * fibo_50 - prints 50 fibo numbers
 *
 * Return: Always 0.
 */
void fibo_50(void)
{
unsigned int target;
unsigned long int f, l, i, fib;
f = 1;
l = 2;
target = 50 - 2;
printf("1, 2, ");
for (i = 0 ; i < target ; i++)
{
fib = f + l;
printf("%lu", fib);
f = l;
l = fib;
if (i < target - 1)
printf(", ");
}
putchar('\n');
}
/**
 * main - Entry point,
 *
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
fibo_50();
return (0);
}
