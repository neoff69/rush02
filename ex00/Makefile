# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: croy <croy@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 15:29:09 by croy              #+#    #+#              #
#    Updated: 2022/07/24 19:02:21 by croy             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #
SCRS    = ${wildcard *.c}

OBJS	= ${SCRS:.c=.o}

NAME	= rush-02

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o :
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 		${NAME}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
