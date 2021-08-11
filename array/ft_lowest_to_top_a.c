/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowest_to_top_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 14:18:55 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_lowest_to_top_a(int *array_a, int *size_a)
{
	int	i;
	int	amount_rotations;
	int	on_off;

	i = 0;
	amount_rotations = ft_find_lowest_number(array_a, *size_a);
	if (amount_rotations < (*size_a / 2))
		on_off = 1;
	else
	{
		on_off = 0;
		amount_rotations = *size_a - amount_rotations;
	}
	while (i < amount_rotations)
	{
		if (on_off == 1)
			ft_ra(array_a, *size_a);
		else
			ft_rra(array_a, *size_a);
		i++;
	}	
}
