#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_putchar_count(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i = i + 1;
	}
	return (0);
}

void	rush03st(int a, int by);

int	main(void)
{
	ft_putchar()
	return (0);
}