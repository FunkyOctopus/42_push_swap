/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_index_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 10:37:03 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 14:33:36 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_single_int_free(int **string)
{
	if (!string)
		return ;
	free(*string);
	*string = 0;
}

static void	array_copier_sorted(int *array, int *sorted, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		sorted[i] = array[i];
		i++;
	}
	ft_sort_array(sorted, size);
}

static void	array_copier(int *array, int *array_copy, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		array_copy[i] = array[i];
		i++;
	}
}

static void	index_placer(int *array, int *array_copy, int *sorted, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (sorted[i] == array_copy[j])
				array[j] = i;
			j++;
		}
		i++;
	}
}

void	ft_create_index_array(int *array, int size)
{
	int	*array_copy;
	int	*sorted;

	array_copy = (int *)ft_calloc(size, sizeof(int));
	if (array_copy == 0)
		return ;
	sorted = (int *)ft_calloc(size, sizeof(int));
	if (sorted == 0)
		return ;
	array_copier(array, array_copy, size);
	array_copier_sorted(array, sorted, size);
	index_placer(array, array_copy, sorted, size);
	ft_single_int_free(&array_copy);
	ft_single_int_free(&sorted);
}
