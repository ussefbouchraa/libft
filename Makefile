# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 00:57:35 by ybouchra          #+#    #+#              #
#    Updated: 2023/02/20 11:42:14 by ybouchra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_itoa.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_printf.c \
		ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putunsigned.c \
		get_next_line.c
		
		


OBJS = $(FILES:.c=.o)


all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@ 
	
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
