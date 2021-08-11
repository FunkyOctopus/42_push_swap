/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_pre_lowest_number.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 14:46:51 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	pre_lowest(int *array, int size, int lowest)
{
	int	j;
	int	pre_lowest;

	pre_lowest = array[lowest] + 1;
	j = 0;
	while (j < size)
	{
		if (array[j] == pre_lowest)
			return (j);
		j++;
	}
	return (0);
}

int	ft_find_pre_lowest_number(int *array, int size)
{
	int	i;
	int	temp;
	int	result;

	i = 0;
	temp = array[size - 1];
	result = size - 1;
	while (i < size - 1)
	{
		if (array[i] < temp)
		{
			temp = array[i];
			result = i;
		}
		i++;
	}
	return (pre_lowest(array, size, result));
}
