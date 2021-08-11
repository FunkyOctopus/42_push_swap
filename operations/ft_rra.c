/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 14:20:32 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rra(int *array_a, int size_a)
{
	int	i;
	int	temp;

	i = 0;
	temp = array_a[size_a - 1];
	if (size_a <= 1)
		return ;
	while (i < size_a - 1)
	{
		array_a[size_a - i - 1] = array_a[size_a - i - 2];
		i++;
	}
	array_a[0] = temp;
	write(1, "rra\n", 4);
}
