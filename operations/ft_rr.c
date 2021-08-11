/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:46:10 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_ra_static(int *array_a, int size_a)
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
}

static void	ft_rb_static(int *array_b, int size_b)
{
	int	i;
	int	temp;

	i = 0;
	temp = array_b[0];
	if (size_b <= 1)
		return ;
	while (i < size_b - 1)
	{
		array_b[i] = array_b[i + 1];
		i++;
	}
	array_b[size_b - 1] = temp;
}

void	ft_rr(int *array_a, int *array_b, int size_a, int size_b)
{
	ft_ra_static(array_a, size_a);
	ft_rb_static(array_b, size_b);
	write(1, "rr\n", 3);
}
