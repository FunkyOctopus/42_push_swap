/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 07:38:52 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 18:07:58 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>  
# include <stdio.h>

typedef struct s_struct
{
	int	splitter;
	int	i;
	int	j;
	int	on_off;
	int	rotations;
}	t_struct;

typedef struct s_struct2
{
	int		i;
	int		j;
	char	*tmp;	
	char	*tmp2;	
	char	*str;
}	t_struct2;

int			main(int argc, char *argv[]);

void		ft_op_sender(int *array_a, int *array_b, int *size_a, int *size_b);
void		ft_size_3_a(int *array_a, int *size_a);
void		ft_size_50(int *array_a, int *array_b, int *size_a, int *size_b);
void		ft_size_500(int *array_a, int *array_b, int *size_a, int *size_b);
void		ft_ra_rra(int *array_a, int *size_a, int *rotations, int *on_off);
void		ft_rb_rrb(int *array_b, int *size_b, int *rotations, int *on_off);

char		**ft_input_parser(char **argv);
int			ft_error_checker(int argc, char *argv[], int size);
void		ft_custom_free(int **array_a, int **array_b);
void		ft_single_free(char	**string);
void		ft_double_free(char	**string);
long long	ft_long_long_atoi(const char *str);

int			ft_find_lowest_number(int *array, int size);
int			ft_find_pre_lowest_number(int *array, int size);
int			ft_find_highest_number(int *array, int size);
int			ft_first_occur(int *array, int size, int splitter);
int			ft_first_occur_rev(int *array, int size, int splitter);
int			ft_is_rev_sorted_array(int *array, int size);
int			ft_is_sorted_array(int *array, int size);
int			ft_array_len(char **argv);
int			ft_closest_number_a_b(int *array, int array_size, int swap_number);
int			ft_closest_number_b_a(int *array, int array_size, int swap_number);
void		ft_argv_to_array(int *array_a, char *argv[], int size_a);
void		ft_sort_array(int *tab, int size);
void		ft_create_index_array(int *array, int size);
void		ft_highest_to_top_b(int *array_b, int *size_b);
void		ft_lowest_to_top_a(int *array_b, int *size_b);

void		ft_sa(int *array_a, int size_a);
void		ft_sb(int *array_b, int size_b);
void		ft_ss(int *array_a, int *array_b, int size_a, int size_b);
void		ft_pa(int *array_a, int *array_b, int *size_a, int *size_b);
void		ft_pb(int *array_a, int *array_b, int *size_a, int *size_b);
void		ft_ra(int *array_a, int size_a);
void		ft_rb(int *array_b, int size_b);
void		ft_rr(int *array_a, int *array_b, int size_a, int size_b);
void		ft_rra(int *array_a, int size_a);
void		ft_rrb(int *array_b, int size_b);
void		ft_rrr(int *array_a, int *array_b, int size_a, int size_b);

#endif
