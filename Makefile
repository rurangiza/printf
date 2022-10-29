# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:44:59 by arurangi          #+#    #+#              #
#    Updated: 2022/10/29 08:00:10 by Arsene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_printf.c \
			ft_strlen.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_putnbr_u.c \
			ft_isalpha.c \
			ft_puthex.c \
			ft_putfs.c

NAME =		libftprintf.a

OBJS =		${SRCS:.c=.o}

FLAGS =		-Wall -Wextra -Werror 
CC =		gcc ${FLAGS}
RM =		rm -f

${NAME} :	${OBJS}
				ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
