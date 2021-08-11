/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closest_number_a_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 14:34:59 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	ft_abs(int temp)
{
	if (temp < 0)
		return (temp *= -1);
	else
		return (temp);
}

int	ft_closest_number_a_b(int *array, int array_size, int swap_number)
{
	int	i;
	int	result;
	int	temp;

	if (array_size < 1)
		return (0);
	i = 1;
	temp = ft_abs(swap_number - array[0]);
	if (swap_number > array[0])
		result = 0;
	else
		result = 1;
	while (i < array_size)
	{
		if (temp > ft_abs(swap_number - array[i]))
		{
			temp = ft_abs(swap_number - array[i]);
			if (swap_number < array[i])
				result = i + 1;
			else
				result = i;
		}
		i++;
	}
	return (result);
}
