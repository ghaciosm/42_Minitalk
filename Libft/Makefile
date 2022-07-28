# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghaciosm <ghaciosm@student.42kocaeli.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 16:33:13 by ghaciosm          #+#    #+#              #
#    Updated: 2022/02/09 16:39:28 by ghaciosm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strtrim.c \
	   ft_bzero.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strdup.c \
	   ft_calloc.c ft_split.c ft_strlen.c ft_tolower.c ft_itoa.c \
	   ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_toupper.c \
	   ft_isalpha.c ft_memcmp.c ft_strnstr.c ft_isascii.c ft_substr.c\
	   ft_memcpy.c ft_strjoin.c ft_strrchr.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \
	   ft_strmapi.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c 

BONUS_OBJS = $(BONUS:.c=.o)

OBJS = $(SRCS:.c=.o)

CC = gcc 

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(BONUS_OBJS) $(OBJS)
	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re fclean clean
