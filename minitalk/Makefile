# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 14:45:58 by isbraz-d          #+#    #+#              #
#    Updated: 2023/07/11 15:28:58 by isbraz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client server

SRCS = client.c server.c utils.c utils2.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

server: server.c utils.c
	$(CC) $(CFLAGS) -o $@ $^

client: client.c utils.c utils2.c
	$(CC) $(CFLAGS) -o $@ $^
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all