/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 08:10:26 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/14 20:37:51 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUF_SIZE 4096

int main(int argc, char *argv[])
{
	int i;
	int content;
	char *filename;
	int map;
	char buf[BUF_SIZE + 1];

	i = 0;

	if(argc > 2)
	{
		printf("Should there be more than 2 a arguments?");
		return(0);
	}
	else
		filename = argv[1];
		printf("Filename : %s\n", filename);
		
	
	content = open(filename, O_RDONLY);

	/*while((map = read(0, buf, 1)))
		{
			buf[map] = '\n';
		}
	*/

	if (content)
	{
		map = read(1, content, 1000);
		printf("%c", map);
		printf("%s", buf);
		/*malloc here ssize_t*/
	}
		
		exit(1);
		
		printf("%c", map);
		printf("%s", buf);
		/*malloc here ssize_t*/
	

		printf("Error message");


	return (0);
}