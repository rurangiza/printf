# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:44:59 by arurangi          #+#    #+#              #
#    Updated: 2022/10/28 13:43:19 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_printf.c \
			ft_strlen.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_putnbr_u.c \
			ft_isalpha.c \
			ft_ntohex.c \
			print_variables.c

NAME =		libftprintf.a

OBJS =		${SRCS:.c=.o}

FLAGS =		-Wall -Wextra -Werror 
CC =		gcc ${FLAGS}
RM =		rm -f

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
