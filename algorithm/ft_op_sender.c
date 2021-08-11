/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_sender.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 19:04:23 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_op_sender(int *array_a, int *array_b, int *size_a, int *size_b)
{
	while (*size_a > 0)
	{
		if (*size_a >= 175)
			ft_size_500(array_a, array_b, size_a, size_b);
		else if (*size_a >= 50)
			ft_size_50(array_a, array_b, size_a, size_b);
		if (ft_is_sorted_array(array_a, *size_a) == 1)
			break ;
		else if (*size_a == 3)
			ft_size_3_a(array_a, size_a);
		else if (ft_is_rev_sorted_array(array_a, *size_a) && *size_a == 2)
			ft_rra(array_a, *size_a);
		else if (ft_find_lowest_number(array_a, *size_a) == 0)
			ft_pb(array_a, array_b, size_a, size_b);
		else if (ft_find_lowest_number(array_a, *size_a) == 1)
		{
			ft_sa(array_a, *size_a);
			ft_pb(array_a, array_b, size_a, size_b);
		}
		else if (ft_find_lowest_number(array_a, *size_a) < (*size_a / 2))
			ft_ra(array_a, *size_a);
		else
			ft_rra(array_a, *size_a);
	}
}
