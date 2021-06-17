/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_obs_or_empty.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:07:45 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 08:05:33 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_foreach(char *str, void (*f)(int))
{
	int i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			f(str[i]);
			i++;
		}
	}
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

