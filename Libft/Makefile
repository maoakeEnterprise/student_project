# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mteriier </var/spool/mail/mteriier>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 14:30:21 by mteriier          #+#    #+#              #
#    Updated: 2025/11/02 15:47:24 by mteriier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#SETTINGS#
LIBC = isalnum.c isascii.c

SRC = $(LIBC)

CC = gcc

CFLAGS = -Werror -Wextra -Wall

OBJDIR = build

NAME = libft.a

OBJ = $(patsubst %.c, $(OBJDIR)/%.o, $(SRC))

#RULES#
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)


clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all


