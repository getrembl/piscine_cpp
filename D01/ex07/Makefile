#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: getrembl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/04 22:37:20 by getrembl          #+#    #+#              #
#    Updated: 2015/11/04 22:37:27 by getrembl         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= sed
SRC			= main.cpp

CC			= /usr/bin/clang++
CFLAGS		= -Wall -Wextra -Werror
RM			= /bin/rm -f
ECHO			= /bin/echo -e

$(NAME)	:
				@$(CC) $(CFLAGS) -o $(NAME) $(SRC)
				@$(ECHO) '> Compiled'

clean	:
				-@$(RM) *~
				@$(ECHO) '> Directory cleaned'

all		:		$(NAME)

fclean	:		clean
				-@$(RM) $(NAME)
				@$(ECHO) '> Remove executable'

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) -o $@ -c $<

#******************************************************************************#
