/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_rrb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 15:18:22 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rb_rrb(int *array_b, int *size_b, int *rotations, int *on_off)
{
	int	j;

	j = 0;
	while (j < *rotations)
	{
		if (*on_off == 1)
			ft_rb(array_b, *size_b);
		else
			ft_rrb(array_b, *size_b);
		j++;
	}
}
