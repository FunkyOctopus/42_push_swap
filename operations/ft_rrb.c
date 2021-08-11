/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:46:02 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rrb(int *array_b, int size_b)
{
	int	i;
	int	temp;

	i = 0;
	temp = array_b[size_b - 1];
	if (size_b <= 1)
		return ;
	while (i < size_b - 1)
	{
		array_b[size_b - i - 1] = array_b[size_b - i - 2];
		i++;
	}
	array_b[0] = temp;
	write(1, "rrb\n", 4);
}
