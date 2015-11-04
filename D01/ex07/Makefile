#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/17 21:34:07 by sdurr             #+#    #+#              #
#    Updated: 2015/06/17 21:34:49 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= sed
SRC			= main.cpp

OBJ			= $(SRC:.c=.o)
CC			= /usr/bin/clang++
CFLAGS		= -Wall -Wextra -Werror
RM			= /bin/rm -f
ECHO			= /bin/echo -e

$(NAME)	:		$(OBJ)
				@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
				@$(ECHO) '> Compiled'

clean	:
				-@$(RM) $(OBJ)
				-@$(RM) *~
				@$(ECHO) '> Directory cleaned'

all		:		$(NAME)

fclean	:		clean
				-@$(RM) $(NAME)
				@$(ECHO) '> Remove executable'

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) -o $@ -c $<
