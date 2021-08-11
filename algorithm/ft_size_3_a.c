/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_3_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/07 12:50:42 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_size_3_a(int *array_a, int *size_a)
{
	if (ft_is_rev_sorted_array(array_a, *size_a))
	{
		ft_sa(array_a, *size_a);
		ft_rra(array_a, *size_a);
	}
	else if ((ft_find_highest_number(array_a, *size_a) == 0
			&& ft_find_lowest_number(array_a, *size_a) == 1))
	{
		ft_rra(array_a, *size_a);
		ft_rra(array_a, *size_a);
	}
	else if ((ft_find_highest_number(array_a, *size_a) == 2
			&& ft_find_lowest_number(array_a, *size_a) == 1))
		ft_sa(array_a, *size_a);
	else if ((ft_find_highest_number(array_a, *size_a) == 1
			&& ft_find_lowest_number(array_a, *size_a) == 0))
	{
		ft_sa(array_a, *size_a);
		ft_ra(array_a, *size_a);
	}
	else
		ft_rra(array_a, *size_a);
}
