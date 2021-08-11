/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_highest_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:47:10 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_find_highest_number(int *array, int size)
{
	int	i;
	int	temp;
	int	result;

	i = 0;
	temp = array[size - 1];
	result = size - 1;
	while (i < size - 1)
	{
		if (array[i] > temp)
		{
			temp = array[i];
			result = i;
		}
		i++;
	}
	return (result);
}
