# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:44:59 by arurangi          #+#    #+#              #
#    Updated: 2022/10/20 16:52:22 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_printf.c

NAME =		libftprintf.a

OBJS =		${SRCS:.c=.o}

FLAGS =		-Wall -Wextra -Werror 
CC =		gcc
RM =		rm -f

all:		${NAME}

${NAME} :	${OBJS}
				ar rcs ${NAME} ${OBJS}

bonus:		${OBJS}
				ar rcs ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re