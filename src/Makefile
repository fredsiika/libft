# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/12 06:39:35 by fredsiik          #+#    #+#              #
#    Updated: 2019/02/12 06:45:17 by fredsiik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
HEAD		= libft.h
SRCS		= src/

OBJS		= $(SRCS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
AR			= ar rc
RANLIB		= ranlib

.PHONY: all, clean, fclean, re

all: $(NAME)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(AR) $(NAME) $(OBJS)
	@$(RANLIB) $(NAME)
	@echo "[$(NAME)] Library created!"

clean:
	@rm -rfv $(OBJS)
	@echo "Objects removed!"

fclean: clean
	@rm -rfv $(NAME)
	@echo "[$(NAME)] Library removed!"

re: fclean all
