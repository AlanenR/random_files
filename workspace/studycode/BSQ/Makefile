# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/11 07:35:53 by ralanen           #+#    #+#              #
#    Updated: 2021/06/14 07:52:15 by ralanen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = *.c

HEADERS = *.h

CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRCS) -I $(HEADERS)

.PHONY: clean fclean re

clean:
	rm -f *.o *.c~ *.h~

fclean: clean
	rm -f $(NAME)

re: fclean all
