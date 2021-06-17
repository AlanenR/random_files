/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:45:30 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/15 15:17:42 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This one reads and displays a file content given as an argument. 
We should figure out how to save it somewhere instead of displaying it 
in the standard output.
Should we create a pointer and use it with Malloc?

Then we need some function that reads the first line starting from the end 
and separates the characters to obs, empty etc.

Not sure what to do with the map. Use Atoi to convert the characters to 1 and 0,
so we can start calculating the values and use some algorithm to define where 
to put the square?
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUF_SIZE 400

char   ft_read_map(char *file)
{
    int        fd;
    int        ret;
	char	buf[BUF_SIZE + 1];
	
    fd = open(file, O_RDONLY);
    if (fd == -1)
    {
 
    }
    while ((ret = read(fd, buf, BUF_SIZE)))
    {
        buf[ret] = '\0';
    }
	close(fd);

	return (*buf);
}

int main(int argc, char **argv)
{
	char *data;

	if (argc < 0)
	return (0);
	
	data = ft_read_map(argv[1]);
	nextfunction(data);
	printf("%s\n", data);
	return (0);
}