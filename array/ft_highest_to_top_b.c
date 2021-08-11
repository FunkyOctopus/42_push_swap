/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highest_to_top_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 14:13:34 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_highest_to_top_b(int *array_b, int *size_b)
{
	int	i;
	int	amount_rotations;
	int	on_off;

	i = 0;
	amount_rotations = ft_find_highest_number(array_b, *size_b);
	if (amount_rotations < (*size_b / 2))
		on_off = 1;
	else
	{
		on_off = 0;
		amount_rotations = *size_b - amount_rotations;
	}
	while (i < amount_rotations)
	{
		if (on_off == 1)
			ft_rb(array_b, *size_b);
		else
			ft_rrb(array_b, *size_b);
		i++;
	}	
}
