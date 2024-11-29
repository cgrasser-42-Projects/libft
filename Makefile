# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 14:07:27 by cgrasser          #+#    #+#              #
#    Updated: 2024/11/29 14:00:27 by cgrasser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC_DIR = src/
INC_DIR = include/
OBJ_DIR = build/

SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_putnbr_base.c \
       ft_nbrlen_base.c \
       ft_get_next_line.c \
       ft_printf.c \
       ft_printf_flag.c \
       ft_printf_char.c \
       ft_printf_string.c \
       ft_printf_ptr.c \
       ft_printf_int.c \
       ft_printf_uint.c \
       ft_printf_hex.c \
       ft_lstnew_bonus.c \
       ft_lstadd_front_bonus.c \
       ft_lstsize_bonus.c \
       ft_lstlast_bonus.c \
       ft_lstadd_back_bonus.c \
       ft_lstdelone_bonus.c \
	   ft_lstclear_bonus.c \
       ft_lstiter_bonus.c \
       ft_lstmap_bonus.c

BOLD = \033[1m
GREEN = \033[32m
RESET = \033[0m

BANNER = printf "\n ██$(GREEN)╗$(RESET)     ██$(GREEN)╗$(RESET)██████$(GREEN)╗$(RESET) ███████$(GREEN)╗$(RESET)████████$(GREEN)╗$(RESET)\
\n ██$(GREEN)║$(RESET)     ██$(GREEN)║$(RESET)██$(GREEN)╔══$(RESET)██$(GREEN)╗$(RESET)██$(GREEN)╔════╝╚══$(RESET)██$(GREEN)╔══╝$(RESET)\
\n ██$(GREEN)║$(RESET)     ██$(GREEN)║$(RESET)██████$(GREEN)╔╝$(RESET)█████$(GREEN)╗$(RESET)     ██$(GREEN)║$(RESET)   \
\n ██$(GREEN)║$(RESET)     ██$(GREEN)║$(RESET)██$(GREEN)╔══$(RESET)██$(GREEN)╗$(RESET)██$(GREEN)╔══╝$(RESET)     ██$(GREEN)║$(RESET)   \
\n ███████$(GREEN)╗$(RESET)██$(GREEN)║$(RESET)██████$(GREEN)╔╝$(RESET)██$(GREEN)║$(RESET)        ██$(GREEN)║$(RESET)   \
\n $(GREEN)╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝$(RESET)   \n"


OBJS = $(SRCS:%.c=$(OBJ_DIR)%.o)

all: $(NAME)
	@$(BANNER)

sub: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(BOLD) libft.a $(GREEN)✔$(RESET)"


$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@printf "$(GREEN)█$(RESET)"

clean:
	@$(RM) $(OBJS)
	@echo "$(BOLD) ⋅ Cleaned all object files ! $(GREEN)✔$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BOLD) ⋅ Cleaned libft.a ! $(GREEN)✔$(RESET)"

re: fclean all

.PHONY: all clean fclean re
