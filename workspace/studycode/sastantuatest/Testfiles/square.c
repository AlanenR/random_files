/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 17:14:40 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/15 18:34:17 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* C program to Print Square Number Pattern */
#include <stdio.h>
 
int main()
{
    int i, j, Side;
    i = 0;
     
    printf("Please Enter Any Side of a Square : ");
    scanf("%d", &Side);
     
    while(i < Side)
    {
    	j = 0;
    	while(j < Side)
		{
           	printf("x");
           	j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
