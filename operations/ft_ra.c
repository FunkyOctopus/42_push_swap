/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:46:42 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_ra(int *array_a, int size_a)
{
	int	i;
	int	temp;

	i = 0;
	temp = array_a[0];
	if (size_a <= 1)
		return ;
	while (i < size_a - 1)
	{
		array_a[i] = array_a[i + 1];
		i++;
	}
	array_a[size_a - 1] = temp;
	write(1, "ra\n", 3);
}
