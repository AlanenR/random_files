#include <stdio.h>

int factorial(int n)
{
	int result = 0;

	if (n == 0)
		result = 1;
	
	else
		result = n * factorial (n-1);
	
	return result;
}

int main (void)
{
	int j = 0;

	for ( j = 0; j < 8; ++j)
		printf ("%d! = %d\n", j, factorial (j));

	return 0;
}