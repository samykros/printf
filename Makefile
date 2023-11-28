# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   main.c                                             :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: spascual <spascual@student.42berlin.de>    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/10/1 18:49:27 by spascual           #+#    #+#             #
#   Updated: 2023/10/1 14:11:37 by spascual          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror


SRC = 	ft_printf.c \
		utils.c \
		utils_2.c \
		utils_3.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	cc $(FLAGS) -I . -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
