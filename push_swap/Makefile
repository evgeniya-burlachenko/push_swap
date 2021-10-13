# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 09:55:53 by skelly            #+#    #+#              #
#    Updated: 2021/10/13 14:06:03 by skelly           ###   ########.fr        #
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

OBJS = $(SRCS:.c=.o)

OBJS_P = $(SRCS_P:.c=.o)

OBJS_C = $(SRCS_C:.c=.o)

LIBFT = libft

CC := gcc -Wall -Werror -Wextra -fsanitize=address -g
LIB_FLAGS = -L libft -lft
RM = rm -f

all: $(NAME_P)

$(NAME_P):			$(OBJS) $(OBJS_P) $(HEADER) $(LIBFT)
					@make -s -C $(LIBFT)
					@$(CC) $(LIB_FLAGS) $(OBJS) $(OBJS_P) -o $(NAME_P)

bonus:				$(OBJS) $(OBJS_C) $(HEADER) $(LIBFT)
					@make -s -C $(LIBFT)
					@$(CC) $(LIB_FLAGS) $(OBJS) $(OBJS_C) -o $(NAME_C)

clean:
					$(RM) $(OBJS) $(OBJS_C) $(OBJS_P)
					@make clean -C $(LIBFT)

fclean:				clean
					$(RM) $(NAME_C) $(NAME_P)

re:					fclean all
norm:
					@norminette . | grep Error

.PHONY: all clean fclean re