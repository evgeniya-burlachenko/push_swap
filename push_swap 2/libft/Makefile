# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraphael <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 14:21:00 by fraphael          #+#    #+#              #
#    Updated: 2020/11/12 14:38:30 by fraphael         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

SRCS	=	ft_atoi.c\
		  	ft_bzero.c\
			ft_calloc.c\
		  	ft_isalnum.c\
		  	ft_isalpha.c\
		  	ft_isascii.c\
		  	ft_isdigit.c\
		  	ft_isprint.c\
		  	ft_memccpy.c\
		  	ft_memchr.c\
		  	ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
		  	ft_strchr.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
		  	ft_strlen.c\
			ft_strmapi.c\
		  	ft_strncmp.c\
			ft_strnstr.c\
		  	ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
		  	ft_tolower.c\
		  	ft_toupper.c\
		  	get_next_line.c

OBJS	= 	$(SRCS:.c=.o)

CFLAGS	= 	-Wall -Wextra -Werror

.c.o:
			gcc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf  $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
