/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolsFile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:15:50 by ralanen           #+#    #+#             */
/*   Updated: 2021/05/30 10:43:08 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*. RUSH 03


*ptr1 = ('A');
*ptr2 = ('C');
*ptr3 = (x - 2) * (' ');






int rush03(int i)
{
	if (i <= 5>)
	{
		i += 1;
		write(1, "A", 1);
		rush03(i);
		write(1, "B", 1);
		return (0);
	}
	else
	{
		return (0);
	}
}

int main()
{
	rush03(0);
	return (0);
}

 
	STRING MANIPULATION: 
	
	void ft_putchar(char c)
	{
		write(1, &c, 1);
	}
	
	void ft putchar(char *str)
	{
		int index;

		index = 0;
		while (str[index]) != '\0')
			{
				ft_putchar(str[index]);
				index++;
			}
	}

	void replace_last_char_with_C(char *str)		WITH THIS WE CAN REPLACE ANY BOX OF THE ARRAY
	{
		str[x] = 'C';
	}

	void replace_first_char(char *str, char *dest);
	{
		dest[0] = 'A';
	}

	int main(void)
	{
		char str1[] = "AAA";
		char str2[] = "BBB"
		
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		ft_putchar('\n');
		replace_first_char(str1, str2);
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		ft_putstr(str1);
		ft_putchar('\n');
		return (0);
	}


TEST

		char str1[] = "AAA";
		char str2[] = "BBB"

		int array[10];
		int *ptr = &array[0];
		int *ptr = &array[0];



		

		void	rush(int x, int y)
{
	if ()
	{
	ft_putchar('C');
	}
	
	if ()
	{
	ft_putchar('B');
	}
	
	if ()
	{
	ft_putchar('C');
	}

	if ()
	{
	ft_putchar(' ');
	}

	else ()
	{
	ft_putchar('\n'');
	}
	
}

Strings and pointers

int main(void) {
  char name[] = "Harry Potter";

  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o
}


MODULO

if ( num % 2 == 0 )

*/



int	main(void)
{
	ft_iterative_factorial(int 45);
	return (0);
}



/*	DAY03 EX00	*/

#include <stdio.h>

int		main(void)
{
	int a;
	int *ptr;

	a = 3;
	
	ptr = &a;
	printf("%d", a);
	ft_ft(ptr);
	printf("%d", a);
	return (0);
}

/*	DAY03 EX01	*/

#include <stdio.h>

int		main(void)
{
    int	a;
    int	*ptr1;
    int	**ptr2;
    int	***ptr3;
    int	****ptr4;
    int	*****ptr5;
    int	******ptr6;
    int	*******ptr7;
    int	********ptr8;
    int	*********ptr9;
	
    a = 3;
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("%d", a);
	ft_ultimate_ft(ptr9);
	printf("%d", a);
	return (0);
}

/*	DAY03 EX02	*/

/*	DAY03 EX03	*/

/*	DAY03 EX04	*/

/*	DAY03 EX05	*/

/*	DAY03 EX06	*/

/*	DAY03 EX07	*/

/*	DAY03 EX08	*/

/*	DAY03 EX09	*/

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

void	ft_putchar(char letter)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	ft_putchar;
	ft_ft;
	return (0);
}

/*

This one displays AAAAAABBBBBB

int rush03(int i)
{
	if (i <= 5>
	{
		i += 1;
		write(1, "A", 1);
		rush03(i);
		write(1, "B", 1);
		return (0);
	}
	else
	{
		return (0);
	}
}

int main()
{
	rush03(0);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:07:43 by ralanen           #+#    #+#             */
/*   Updated: 2021/05/29 09:54:33 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unhistd.h>

int rush03(int i)
{
	if (i <= 5>
	{
		i += 1;
		write(1, "A", 1);
		rush03(i);
		write(1, "B", 1);
		return (0);
	}
	else
	{
		return (0);
	}
}

int main()
{
	rush03(0);
	return (0);
}

/* 
	STRING MANIPULATION: 
	
	void ft_putchar(char c)
	{
		write(1, &c, 1);
	}
	
	void ft putchar(char *str)
	{
		int index;

		index = 0;
		while (str[index]) != '\0')
			{
				ft_putchar(str[index]);
				index++;
			}
	}

	void replace_first_char_with_C(char *str)		WITH THIS WE CAN REPLACE ANY BOX OF THE ARRAY
	{
		str[0] = 'C';
	}

	void replace_first_char(char *str, char *dest);
	{
		dest[0] = 'A';
	}

	int main(void)
	{
		char str1[] = "AAA";
		char str2[] = "BBB"
		
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		ft_putchar('\n');
		replace_first_char(str1, str2);
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		ft_putchar('\n');
		return (0);
	}
*/