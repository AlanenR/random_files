#include <stdio.h>

void upAndDown(int);

int main(void)
{
	upAndDown(1);

	return (0);
}

void upAndDown(int n)
{
	printf("Level %d: n location %p\n", n, &n);

	if (n < 4)
		upAndDown(n+1);
	
	printf("LEVEL %d: n location %p\n", n, &n);
}