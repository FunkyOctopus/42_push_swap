/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/03 11:59:05 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pa(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	i;
	int	j;
	int	temp;

	if (*size_b < 1)
		return ;
	i = 0;
	while (i < *size_a)
	{
		array_a[*size_a - i] = array_a[*size_a - i - 1];
		i++;
	}
	temp = array_b[0];
	array_a[0] = temp;
	j = 0;
	while (j < *size_b - 1)
	{
		array_b[j] = array_b[j + 1];
		j++;
	}
	*size_a += 1;
	*size_b -= 1;
	write(1, "pa\n", 3);
}
