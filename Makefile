# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 13:16:04 by wmessmer          #+#    #+#              #
#    Updated: 2022/11/24 10:54:34 by wmessmer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
HEADER = libft.h
SRCS =		srcs/src_part1/ft_isalpha.c	\
		srcs/src_part1/ft_isdigit.c	\
		srcs/src_part1/ft_isalnum.c	\
		srcs/src_part1/ft_isascii.c	\
		srcs/src_part1/ft_isprint.c	\
		srcs/src_part1/ft_strlen.c	\
		srcs/src_part1/ft_memset.c	\
		srcs/src_part1/ft_bzero.c	\
		srcs/src_part1/ft_memcpy.c	\
		srcs/src_part1/ft_memmove.c	\
		srcs/src_part1/ft_strlcpy.c	\
		srcs/src_part1/ft_strlcat.c	\
		srcs/src_part1/ft_toupper.c	\
		srcs/src_part1/ft_tolower.c	\
		srcs/src_part1/ft_strchr.c	\
		srcs/src_part1/ft_strrchr.c	\
		srcs/src_part1/ft_strncmp.c	\
		srcs/src_part1/ft_memchr.c	\
		srcs/src_part1/ft_memcmp.c	\
		srcs/src_part1/ft_strnstr.c	\
		srcs/src_part1/ft_calloc.c	\
		srcs/src_part1/ft_strdup.c	\
		srcs/src_part2/ft_substr.c \
		srcs/src_part2/ft_strjoin.c \
		srcs/src_part2/ft_strtrim.c \
		srcs/src_part2/ft_split.c \
		srcs/src_part2/ft_itoa.c \
		srcs/src_part2/ft_striteri.c \
		srcs/src_part2/ft_putchar_fd.c \
		srcs/src_part2/ft_putstr_fd.c  \
		srcs/src_part2/ft_putendl_fd.c  \
		srcs/src_part2/ft_putnbr_fd.c \
		srcs/src_part2/ft_atoi.c \
		srcs/src_part2/ft_strmapi.c \
		
BONUS =	srcs/src_bonus/ft_lstnew.c \
		srcs/src_bonus/ft_lstadd_front.c   \
		srcs/src_bonus/ft_lstsize.c \
		srcs/src_bonus/ft_lstlast.c \
		srcs/src_bonus/ft_lstadd_back.c \
		srcs/src_bonus/ft_lstdelone.c    \
		srcs/src_bonus/ft_lstclear.c \
		srcs/src_bonus/ft_lstiter.c \
		srcs/src_bonus/ft_lstmap.c \
		

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS	= ${BONUS:.c=.o}

$(NAME) : ${OBJS}
	ar rc ${NAME} ${OBJS}
	
$(NAME_BONUS) : ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS_BONUS}

all:	${NAME}

bonus:	${OBJS} ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS} ${OBJS_BONUS}

clean :
	/bin/rm -f ${OBJS} ${OBJS_BONUS}

fclean : clean
	/bin/rm -f ${NAME}

re : fclean all

.o .c:
	gcc -Wall -Werror -Wextra -c $< -o ${<:.c = .o}
