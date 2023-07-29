# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yescalon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 11:47:32 by yescalon          #+#    #+#              #
#    Updated: 2023/07/26 13:20:21 by yescalon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs
INCLUDES_DIR = includes
SRCS = $(addprefix $(SRCS_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo "ar -rc $(NAME) $(OBJS)"

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@
	@echo "$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@"

clean:
	@rm -f $(OBJS)
	@echo "rm -f $(OBJS)"

fclean: clean
	@rm -f $(NAME)
	@echo "rm -f $(NAME)"

re: fclean all
