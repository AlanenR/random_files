/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:07:43 by ralanen           #+#    #+#             */
/*   Updated: 2021/05/30 16:03:41 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unhistd.h>

int	rush03st(int x, int y);

int x;
int y;
char letterB;

letterB = ('B')


/* Luodaan pointerit str muistipaikkojen ensimmäiselle ja viimeiselle kirjaimelle 
ja muistipaikalle ensimmäisen ja viimeisen kirjaimen välissä.*/

int ptr1 = &[&0];
int ptr2 = &[x];
int ptr3 = &[1 - (x-1)];




/* Kaksi x * B koostuvaa riviä.
str1 korvataan muistipaikan ensimmäinen kirjain A:lla ja viimeinen C:llä (ptr1 = A, ptr2 = C).
str2 korvataan muistipaikkojen (1 - (x - 1)) väliltä merkit (' ') välilyönnillä (ptr3 = (' ').
*/

char str1;	
char str2;

str1 = x * letterB;  	/* Mitenhän tämä kirjoitetaan oikein? */
str2 = x * letterB;

/* IF/While functioille jotain määrityksiä x:n arvon ehdoilla? if x >= 1 jne*/

IF (x > 2)		
{
	str1()
	{
		*ptr1 = ('A');
		*ptr2 = ('C');
	}
	str2()
	{
		*ptr3 = (x - 2) * (' ');
	}
}



/* Kun string 1 & 2 on selvillä.
tulostuksen ensimmäinen ja viimeinen on aina str1 ja kaikki siltä väliltä str2
Saisiko tämän tehtyä jollain WHILE -ehdoilla myös?

Tai kun tulostettujen rivien määrä on 1< (tulosta str2) <y ja 0 ja y rivi = str1 */

int main(int x, int y)
{
	str1;
	y - 2(str2);
	str1;
}




