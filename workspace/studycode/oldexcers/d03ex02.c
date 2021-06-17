void ft_swap(int *a, int *b);
{
	int *container;

	container = *a;
	*a = *b;
	*b = container;
}