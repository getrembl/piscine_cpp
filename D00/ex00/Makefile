#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: getrembl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 12:17:12 by getrembl          #+#    #+#              #
#    Updated: 2015/11/03 16:05:33 by getrembl         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	megaphone
SRC			=	megaphone.cpp

ifdef FLAGS
	ifeq ($(FLAGS), no)
CFLAGS		=
	endif
	ifeq ($(FLAGS), debug)
CFLAGS		=	-Wall -Wextra -Werror -ansi -pedantic -g
	endif
else
CFLAGS		=	-Wall -Wextra -Werror
endif

CC			=	/usr/bin/g++
RM			=	/bin/rm -f
ECHO		=	/bin/echo -e


$(NAME)	:
				$(CC) $(INCLUDE) $(CFLAGS) -o $(NAME) $(SRC)
				@$(ECHO) '> Compiled'

clean	:
				@$(ECHO) '> Directory cleaned'

all		:		$(NAME)

fclean	:		clean
				-@$(RM) $(NAME)
				@$(ECHO) '> Remove executable'

re		:		fclean all

.PHONY	:		all clean re

%.o		:		$(DIRSRC)/%.c
				$(CC) $(INCLUDE) $(CFLAGS) -o -c $<
