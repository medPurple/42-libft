# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 13:16:04 by wmessmer          #+#    #+#              #
#    Updated: 2022/11/15 17:57:45 by wmessmer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
HEADER = libft.h
SRCS =	ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isdigit.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c	\
		ft_memset.c	\
		ft_bzero.c	\
		ft_memcpy.c	\
		ft_memmove.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c	\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_strnstr.c	\
		ft_calloc.c	\
		ft_strdup.c	\
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c  \
		ft_putendl_fd.c  \
		ft_putnbr_fd.c \
		ft_atoi.c \
		
BONUS =	ft_lstnew.c \
		ft_lstadd_front.c   \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c    \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS	= ${BONUS:.c=.o}

$(NAME) : ${OBJS}
	ar rc ${NAME} ${OBJS}
	
$(NAME_BONUS) : ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS_BONUS}

all:	${NAME}

bonus:	all ${NAME_BONUS}

clean :
	/bin/rm -f ${OBJS} ${OBJS_BONUS}

fclean : clean
	/bin/rm -f ${NAME}

re : fclean all

.o .c:
	gcc -Wall -Werror -Wextra -c $< -o ${<:.c = .o}
