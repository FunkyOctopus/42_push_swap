/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_rra.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 15:18:27 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_ra_rra(int *array_a, int *size_a, int *rotations, int *on_off)
{
	int	j;

	j = 0;
	while (j < *rotations)
	{
		if (*on_off == 1)
			ft_ra(array_a, *size_a);
		else
			ft_rra(array_a, *size_a);
		j++;
	}
}
