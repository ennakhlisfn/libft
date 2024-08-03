# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 15:36:12 by sennakhl          #+#    #+#              #
#    Updated: 2023/12/01 20:29:48 by sennakhl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
		  ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c  ft_strtrim.c ft_split.c ft_itoa.c \
		  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

NAME = libft.a
BSOURCES = \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
              
all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $?

bonus: $(BOBJECTS)

$(BOBJECTS): $(bonus)
	$(CC) $(CFLAGS) -c $(BSOURCES)
	$(AR) $(NAME) $(BOBJECTS)
clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
