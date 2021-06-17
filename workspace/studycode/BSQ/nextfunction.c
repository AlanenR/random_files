#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *row1)
{
	int i;

	i = 0;
	while (row1[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strlen_line(char *row1)
{
	int i;

	i = 0;
	while (row1[i] != '\n')
	{
		i++;
	}
	return (i);
}


void nextfunction(char *str)
{
	int row1;
	char fill;
	/*char obs;
	char empt;
	char map; */

	row1 = ft_strlen_line(str);
	printf("%d row1\n", row1);
	fill = str[3];
	printf("%c fill\n", fill);
	/*obs = row1-2;
	empt = row1-3;
	
	map = ft_row1len(row1);
	map = map - row1;

	printf("%d row1\n", row1);
	printf("%c row1\n", fill);
	printf("%c row1\n", obs);
	printf("%c row1\n", empt);
	printf("%c row1\n", map);
	*/
}

int main(void)
{
	char row12[] = "ejshfaiusldgyoisug ergdsg\nejshfaiusldgyoisug ergdsg\nejshfaiusldgyoisug ergdsg\n\0";
	nextfunction(row12);
}