/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 09:36:33 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/10 11:06:39 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
	int		*array_a;
	int		*array_b;
	int		size_a;
	int		size_b;
	char	**new_argv;

	new_argv = ft_input_parser(argv);
	size_a = ft_array_len(new_argv) - 1;
	size_b = 0;
	if (ft_error_checker(argc, new_argv, size_a + 1) == 1)
		return (0);
	array_a = (int *)ft_calloc(size_a, sizeof(int));
	if (array_a == 0)
		return (0);
	array_b = (int *)ft_calloc(size_a, sizeof(int));
	if (array_b == 0)
		return (0);
	ft_argv_to_array(array_a, new_argv, size_a);
	ft_create_index_array(array_a, size_a);
	ft_op_sender(array_a, array_b, &size_a, &size_b);
	while (size_b > 0)
		ft_pa(array_a, array_b, &size_a, &size_b);
	ft_custom_free(&array_a, &array_b);
	ft_double_free(new_argv);
	return (0);
}
