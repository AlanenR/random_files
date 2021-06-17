/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:45:34 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/13 19:22:43 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 4096




char	*ft_read(int fd)
{
	int i;
	char *str;
	int ret;
	char buf[BUF_SIZE + 1];

	

	i = 0;

	while((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		printf("%s\n", buf);
	}		
	printf("%p\n", &str);
	//printf("%s\n", buf);
	str = (char*)malloc(sizeof(char) * ret + 1);
	
	printf("%p\n", str);
	while (i < ret)
	{
		str[i] = buf[i];
		printf("%c", str[i]);
		i++;
	}
	str[i+1] = '\0';
	//printf("%s\n", str);*/
	//printf("%s\n", buf);
	//what_dimensions(buf);
	return (str);
}


int main(void)
{
	char *str1;
	
	str1 = ft_read(0);
	printf("%s", str1);
	printf("ldfhlhf");
	
	

	return (0);
}