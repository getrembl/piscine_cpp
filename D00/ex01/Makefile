#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/15 14:27:02 by sdurr             #+#    #+#              #
#    Updated: 2015/06/15 15:23:23 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= PhoneBook
SRC			= main.cpp \
				Contact.class.cpp \

OBJ			= $(SRC:.c=.o)
CC			= /usr/bin/g++
CFLAGS		= -Wall -Wextra -Werror
RM			= /bin/rm -f
ECHO			= /bin/echo -e

$(NAME)	:		$(OBJ)
				@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
				@$(ECHO) '> Compiled'

clean	:
				-@$(RM) $(OBJ)
				@$(ECHO) '> Directory cleaned'

all		:		$(NAME)

fclean	:		clean
				-@$(RM) $(NAME)
				@$(ECHO) '> Remove executable'

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) -o $@ -c $<
