/**
 * reverse_array - reverse an array
 *@a: array to reverse
 *@n: dim of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i;
int c;
int j;
j = n - 1;
for (i = 0 ; i < n / 2; i++)
{
c = a[i];
a[i] = a[j];
a[j - 1] = c;
}
}
