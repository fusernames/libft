# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 15:15:20 by alcaroff          #+#    #+#              #
#    Updated: 2018/10/09 16:05:29 by alcaroff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR			=	./
NAME		=	libft.a
FLAGS		=	-Wall -Werror -Wextra
INCLUDES	=	includes
SRC			=	\
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_strlcat.c ft_strstr.c ft_strnstr.c ft_strcat.c \
	ft_strncat.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strchr.c \
	ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_atoi.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
	ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	ft_itoa.c ft_putchar_fd.c ft_putchar.c ft_putstr.c ft_putstr_fd.c \
	ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_lstnew.c \
	ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
	ft_isspace.c ft_islower.c ft_isupper.c ft_isblank.c ft_isxdigit.c \
	ft_strtrimc.c ft_strndup.c ft_itoa_base.c ft_charoc.c \
	ft_lstgetlast.c ft_lstaddlast.c ft_lstnewlast.c ft_lstrm.c \
	ft_strtolower.c \
	ft_itoa_base_un.c \
	ft_strisspace.c \
	get_next_line.c \
	ft_linelen.c \
	ft_tablen.c \
	ft_tabfree.c \
	ft_lstlen.c \
	ft_lstnewadd.c \
	ft_lstfree.c \
	ft_lstdup.c \
	ft_splitwhitespace.c \
	ft_lstcpy.c \
	ft_strisnum.c \

OBJ			=	$(SRC:.c=.o)

all: $(DIR)$(NAME)

$(DIR)$(NAME): $(OBJ) $(INCLUDES)/libft.h
	@ar rc $(DIR)$(NAME) $(OBJ)
	@ranlib $(DIR)$(NAME)

%.o: %.c
	@gcc -c $< $(FLAGS) -o $@ -I $(INCLUDES)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(DIR)$(NAME)

re: fclean all
