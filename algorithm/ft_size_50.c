/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_50.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/10 10:52:28 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	send_to_a(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	i;
	int	on_off;
	int	rotations;

	i = 0;
	on_off = 0;
	while (i < *size_a)
	{
		rotations = ft_closest_number_b_a(array_a, *size_a, array_b[0]);
		if (rotations <= (*size_a / 2))
			on_off = 1;
		else
		{
			on_off = 0;
			rotations = *size_a - rotations;
		}
		ft_ra_rra(array_a, size_a, &rotations, &on_off);
		ft_pa(array_a, array_b, size_a, size_b);
		i++;
	}
	ft_lowest_to_top_a(array_a, size_a);
}

static void	send_to_b(int *array_a, int *array_b, int *size_a, int *size_b)
{
	t_struct	var;

	var.i = 0;
	var.on_off = 0;
	var.splitter = *size_a / 4;
	while (var.i < var.splitter)
	{
		var.rotations = ft_closest_number_a_b(array_b, *size_b, array_a[0]);
		if (var.rotations < (*size_b / 2))
			var.on_off = 1;
		else
		{
			var.on_off = 0;
			var.rotations = *size_b - var.rotations;
		}
		ft_rb_rrb(array_b, size_b, &var.rotations, &var.on_off);
		ft_pb(array_a, array_b, size_a, size_b);
		var.i++;
	}
	ft_highest_to_top_b(array_b, size_b);
}

static void	ft_pa_ra(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	counter;
	int	splitter;
	int	j;

	counter = 0;
	splitter = *size_a / 4;
	while (counter < 4 && *size_a > 0)
	{
		send_to_b(array_a, array_b, size_a, size_b);
		j = 0;
		while (j < splitter)
		{
			ft_pa(array_a, array_b, size_a, size_b);
			j++;
		}
		j = 0;
		while (j < splitter)
		{
			ft_ra(array_a, *size_a);
			j++;
		}
		counter++;
	}
}

void	ft_size_50(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	j;
	int	splitter;
	int	total_size_a;

	if (ft_is_sorted_array(array_a, *size_a) == 1)
		return ;
	total_size_a = *size_a;
	splitter = *size_a / 4;
	ft_pb(array_a, array_b, size_a, size_b);
	ft_pa_ra(array_a, array_b, size_a, size_b);
	j = 0;
	while (j < (total_size_a - splitter))
	{
		ft_pb(array_a, array_b, size_a, size_b);
		j++;
	}
	send_to_a(array_a, array_b, size_a, size_b);
}
