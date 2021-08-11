# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/24 07:39:26 by olgerret          #+#    #+#              #
#    Updated: 2021/08/09 18:12:39 by olgerret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft_push_swap.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_push_swap.c \
	./algorithm/ft_op_sender.c ./algorithm/ft_size_3_a.c \
	./algorithm/ft_size_50.c ./algorithm/ft_size_500.c \
	./algorithm/ft_ra_rra.c ./algorithm/ft_rb_rrb.c \
	./helper/ft_error_checker.c ./helper/ft_long_long_atoi.c \
	./helper/ft_input_parser.c ./helper/ft_custom_free.c \
	./helper/ft_single_free.c ./helper/ft_double_free.c \
	./array/ft_find_lowest_number.c ./array/ft_find_pre_lowest_number.c \
	./array/ft_find_highest_number.c ./array/ft_is_rev_sorted_array.c \
	./array/ft_first_occur.c ./array/ft_first_occur_rev.c \
	./array/ft_is_sorted_array.c ./array/ft_sort_array.c \
	./array/ft_create_index_array.c ./array/ft_array_len.c \
	./array/ft_argv_to_array.c ./array/ft_closest_number_b_a.c \
	./array/ft_closest_number_a_b.c ./array/ft_highest_to_top_b.c \
	./array/ft_lowest_to_top_a.c \
	./operations/ft_sa.c ./operations/ft_sb.c ./operations/ft_ss.c \
	./operations/ft_pa.c ./operations/ft_pb.c \
	./operations/ft_ra.c ./operations/ft_rb.c ./operations/ft_rr.c \
	./operations/ft_rra.c ./operations/ft_rrb.c ./operations/ft_rrr.c \

all: $(NAME)

$(NAME): *.c
	Make -C ./libft
	cp ./libft/libft.a $(NAME)
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o
	gcc $(FLAGS) ft_push_swap.c -L. -lft_push_swap -o push_swap

clean:
	rm -f ./libft/*.o
	rm -f *.o

fclean: clean
	rm -f ./libft/libft.a
	rm -f $(NAME)

re: fclean $(NAME)
