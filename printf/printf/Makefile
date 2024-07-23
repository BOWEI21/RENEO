# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchen <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 17:03:48 by bchen             #+#    #+#              #
#    Updated: 2024/07/23 21:04:45 by bchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

SOURCES = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_hexadecimal.c ft_putptr.c ft_unsigned.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLGAS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
