# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 12:37:56 by vdecleir          #+#    #+#              #
#    Updated: 2023/10/12 14:15:38 by vdecleir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc

NAME 		= ft_display_file

CFLAGS 		= -Wall -Wextra -Werror

SRCSDIR 	= main.c

INCLUDESDIR	= -I./includes

MY_OBJECTS	= $(SRCSDIR:.c=.o)

RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) $(INCLUDESDIR) -c $< -o $@

$(NAME):	$(MY_OBJECTS)
			$(CC) -o $(NAME) $(MY_OBJECTS)

all:		$(NAME)


clean:
			$(RM) $(MY_OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re