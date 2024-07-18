# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/05 10:07:10 by jsilva-m          #+#    #+#              #
#    Updated: 2024/06/05 17:57:42 by jsilva-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c

BONUS_SRCS = ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	

OBJ = $(SRCS:.c=.o)

BONUS_OBJ = $(BONUS_SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(SRCS) $(OBJ)
		@gcc -c $(FLAGS) $(SRCS)
		@ar rcs $(NAME) $(OBJ)

all: $(NAME)

bonus: $(SRCS) $(BONUS_SRCS) $(BONUS_OBJ)
		@gcc -c $(FLAGS) $(BONUS_SRCS)
		@ar rcs $(NAME) $(BONUS_OBJ)
clean:
		@rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME) $(BONUS_OBJ)

re: 	fclean all

.PHONY: all clean fclean re bonus 
		