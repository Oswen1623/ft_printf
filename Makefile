# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 16:49:33 by lucinguy          #+#    #+#              #
#    Updated: 2025/11/25 12:45:46 by lucinguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := libftprintf.a
CC          := cc
CFLAGS      := -Wall -Wextra -Werror
AR          := ar rcs
RM          := rm -f
INCS        := -I libft/libft.h -I ft_printf.h
LIBFT		:= libft/libft.a

# --Mandatory-- #

SRCS := \
	ft_printf.c \
	ft_printf_utils.c
	conv.c
	checktype.c
	\
	libft/ft_atoi.c \
	libft/ft_bzero.c \
	libft/ft_calloc.c \
	libft/ft_isalnum.c \
	libft/ft_isalpha.c \
	libft/ft_isascii.c \
	libft/ft_isdigit.c \
	libft/ft_isprint.c \
	libft/ft_memchr.c \
	libft/ft_memcmp.c \
	libft/ft_memcpy.c \
	libft/ft_memmove.c \
	libft/ft_memset.c \
	libft/ft_strchr.c \
	libft/ft_strdup.c \
	libft/ft_strlcat.c \
	libft/ft_strlcpy.c \
	libft/ft_strlen.c \
	libft/ft_strncmp.c \
	libft/ft_strnstr.c \
	libft/ft_strrchr.c \
	libft/ft_tolower.c \
	libft/ft_toupper.c \
	\
	libft/ft_itoa.c \
	libft/ft_putchar_fd.c \
	libft/ft_putendl_fd.c \
	libft/ft_putnbr_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_split.c \
	libft/ft_striteri.c \
	libft/ft_strjoin.c \
	libft/ft_strmapi.c \
	libft/ft_strtrim.c \
	libft/ft_substr.c

# --Bonus-- #

BSRCS := \
	libft/ft_lstnew_bonus.c \
	libft/ft_lstadd_front_bonus.c \
	libft/ft_lstsize_bonus.c \
	libft/ft_lstlast_bonus.c \
	libft/ft_lstadd_back_bonus.c \
	libft/ft_lstdelone_bonus.c \
	libft/ft_lstclear_bonus.c \
	libft/ft_lstiter_bonus.c \
	libft/ft_lstmap_bonus.c

OBJS  := $(SRCS:.c=.o)
BOBJS := $(BSRCS:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C libft

bonus: $(NAME) $(BOBJS)
	$(AR) $(NAME) $(BOBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BOBJS)
	$(MAKE) -C libft clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C libft fclean

re: fclean all
