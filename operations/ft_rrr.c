/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:45:57 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_rra_static(int *array_a, int size_a)
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
}

static void	ft_rrb_static(int *array_b, int size_b)
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
}

void	ft_rrr(int *array_a, int *array_b, int size_a, int size_b)
{
	ft_rra_static(array_a, size_a);
	ft_rrb_static(array_b, size_b);
	write(1, "rrr\n", 4);
}
