NAME_P	= push_swap
NAME_C	= checker

HEADER	= push_swap.h

SRCS	= choices.c\
		  push.c\
		  push_swap.c\
		  reverse_rotate.c\
		  rotate.c\
		  rotate_stack.c\
		  rotate_stack_1.c\
		  swap.c\
		  utils.c\
		  utils1.c\
		  ind_array.c

SRCS_P	= ps_main.c

SRCS_C	= checker.c

OBJS = $(SRCS:.c=.o)

OBJS_P = $(SRCS_P:.c=.o)

OBJS_C = $(SRCS_C:.c=.o)

LIBFT = libft

CC := gcc -Wall -Werror -Wextra
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

re: fclean all

.PHONY: all clean fclean re