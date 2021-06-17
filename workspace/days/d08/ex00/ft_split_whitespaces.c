/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 06:19:46 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/04 17:23:46 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char **ft_split_whitespaces(char *str)
{
	char **string_arr;
	int len;
	int i;
	int nbr_words;
	
	len = ft_strlen(str);
	i = 0;
	nbr_words = 0;
	while (i < len)
	
	return (string_arr);
}


/*

int	ft_strlen(char *str)
{
	int wCount;
	int cCount;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while (cCount[i] != ' ' || '\n' || '\t')
		{
		i++;
		}	
	}
	return (i);
}
*/

/* Extracting words without STRTOK

start with a pointer to the begining of the string
iterate character by character, looking for your delimiter
each time you find one, you have a string from the last position of the length in difference - do what you want with that
set the new start position to the delimiter + 1, and the go to step 2.
Do all these while there are characters remaining in the string...

	main() {
2	    char string[] = "my name is geany";
3	    int length = sizeof(string)/sizeof(char);
4	    printf("%i", length);
5	    int i;
6	    for ( i = 0; i<length; i++ ) {
7	
8	    }   
9	    return 0;
10	}*/

/* STRTOK

int main() 
{
  
  char **array_from_strtok(char *str)
  {
  
  char **token_holder;
  char *token;
  unsigned int lenght;
  int i;
  
  str[_strlen(str) - 1] = '\0';
  lenght = find_command_lenght(str);
  if (lenght == 0)
    return (NULL);
  
  token_holder = malloc((sizeof(char *)) * (lenght + 1));
  if (token_holder == NULL)
    return (NULL);
    
  i = 0;
  token = strtok(str, " ");
  while (token !=NULL)
  {
    token_holder[i] = malloc(_strlen(token) + 1);
    if (token_holder[i] = == NULL)
    {
      free_all_double_ptr(token_holder);
      return (NULL);
    }
    _strncpy(token_holder[i], token, _strlen(token) + 1);
    token = strtok(NULL, " ");
    1++
  }
  token_holder[i] = NULL;
  return (token_holder);
}

  return 0;
}

*/

/* 1. CALCULATES STR LENGHT!

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


int	main(void)
{
	char str1[] = "Whatever this is going on";
	int result = ft_strlen(str1);
	printf("%d", result );
	return (0);
}

*/




/* char **ft_split_whitespaces(char *str)
{
	int i;
	int wCount;
	int cCount;
	int *ptrMemoryAdress;

	char array1[];
	char *array1;

	
	
	while(str == !'\0')
	{
		while(word != ' ' '\t' && word !='\0')
		{
			cCount++
			i++
		}
	}
}

*/



/* 

int	ft_strlen(char *str);

int	main(void)
{
	int	ft_strlen(counter);
	int	counter;

	ft_strlen(counter);
	printf("%d", counter);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		heap;
	char	*str1;

	heap = 0;
	while (src[heap])
		++heap;
	str1 = (char*)malloc(sizeof(*str1) * (heap + 1));
	i = 0;
	while (i < heap)
	{
		str1[i] = src[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
*/