# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 09:55:53 by skelly            #+#    #+#              #
#    Updated: 2021/10/13 16:36:19 by skelly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_P	= push_swap
NAME_C	= checker

HEADER	= push_swap.h

SRCS	= utils.c\
			  rotate.c\
		 	  swap.c\
		 	  push.c\
		  	  rotateReverse.c\
		  	  sortedThree.c\
		  	  sortedFourFive.c\
		 	  utilsError.c\
		  	  indexArray.c\
			  push_swap.c\
			  rotateStack.c\
			  rotateStacketc.c\
			  calcSteps.c

SRCS_P	= mainPs.c

SRCS_C	= checker.c

LIBFT = libft

CC := gcc -Wall -Werror -Wextra
LIB_FLAGS = -L libft -lft
RM = rm -f

all: $(NAME_P)

$(NAME_P):			$(SRCS) $(SRCS_P) $(HEADER) $(LIBFT)
					@make -s -C $(LIBFT)
					@$(CC) $(LIB_FLAGS) $(SRCS) $(SRCS_P) -o $(NAME_P)

bonus:				$(SRCS) $(SRCS_C) $(HEADER) $(LIBFT)
					@make -s -C $(LIBFT)
					@$(CC) $(LIB_FLAGS) $(SRCS) $(SRCS_C) -o $(NAME_C)

clean:
					@make fclean -C $(LIBFT)

fclean:				clean
					$(RM) $(NAME_C) $(NAME_P)

re:					fclean all
norm:
					@norminette . | grep Error

.PHONY: all clean fclean re