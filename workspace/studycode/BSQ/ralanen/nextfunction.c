#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 400

char   *ft_read_map(char *file)
{
    int        fd;
    int        ret;
	char		*buf;

	buf = ((char*)malloc(sizeof(char) * BUF_SIZE));
	
    fd = open(file, O_RDONLY);
    if (fd == -1)
    {
 
    }
    while ((ret = read(fd, buf, BUF_SIZE)))
    {
        buf[ret] = '\0';
    }
	close(fd);

	return (buf);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}


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


char	check_if_obs_or_empty(char c, char o, char e)
{
	if (c == o)
	{
		return ('0');
	}
	if (c == e)
	{
		return ('1');
	}
	else
	{
		ft_error("Not a vald map");
	}
	return(0);
}

void nextfunction(char *str)
{
	int row1;
	int nbrow1;
	int strmap;
	char fill;
	char obs;
	char empt;
	char *mapconvert;

	int i;

	i = 0;
	
	mapconvert = str;
	

	row1 = ft_strlen_line(str);
	fill = str[(row1 - 1)];
	obs = str[(row1 - 2)];
	empt = str[(row1 - 3)];

	nbrow1 = (row1 - 3);
	
	strmap = ft_strlen(str);
	strmap = strmap - row1;

	printf("%d row1\n", row1);
	printf("%d nbrows\n", nbrow1);
	printf("%c fill\n", fill);
	printf("%c obs\n", obs);
	printf("%c empt\n", empt);
	printf("%d strmap\n", strmap);

	while(str[i] != '\0')
	{
		mapconvert[i] = check_if_obs_or_empty(str[i], obs, empt);
		i++;
	}

printf("%s mapconvertstr\n", mapconvert);

}




int main(int argc, char **argv)
{
	char *data;

	if (argc < 0)
	return (0);
	
	data = ft_read_map(argv[1]);
	nextfunction(data);
	return (0);
}



/*char *mapfunction(char *str)
{
	int		i;
	int		row1;
	int		len;
	char	*str3;

	row1 = ft_strlen_line(str);
	len = ft_strlen(str);
	str3 = (char*)malloc(sizeof(*str) * (len - row1));
	i = (row1 + 2);
	while (str[i] != '\0')
	{
		str3[i] = str[i];
		i++;
	}
	str[i] = '\0';
	return (str3);
}

int main(void)
{
	

	char row12[] = "356.ox\nejshfaiusldgyoisug ergdsg\nejshfaiusldgyoisug ergdsg\n\0";
	nextfunction(row12);
	map = mapfunction(row12);
	printf("%s, map string", map);
	return (0);
}
*/