# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:44:59 by arurangi          #+#    #+#              #
#    Updated: 2022/10/23 14:42:13 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_printf.c \
			ft_strlen.c \
			ft_nbrlen.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_putnbr_u.c \
			ft_putnbr_base_u.c
			

NAME =		libftprintf.a

OBJS =		${SRCS:.c=.o}

FLAGS =		-Wall -Wextra -Werror 
CC =		gcc ${FLAGS}
RM =		rm -f
RMT =		rmdir _printfTester

${NAME} :	${OBJS}
				ar rcs ${NAME} ${OBJS}

all:		${NAME}

bonus:		${OBJS}
				ar rcs ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

test:
	git submodule add https://github.com/Tripouille/printfTester.git _printfTester
