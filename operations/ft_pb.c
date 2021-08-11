/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:46:45 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pb(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	i;
	int	j;
	int	temp;

	if (*size_a < 1)
		return ;
	i = 0;
	while (i < *size_b)
	{
		array_b[*size_b - i] = array_b[*size_b - i - 1];
		i++;
	}
	temp = array_a[0];
	array_b[0] = temp;
	j = 0;
	while (j < *size_a - 1)
	{
		array_a[j] = array_a[j + 1];
		j++;
	}
	*size_a -= 1;
	*size_b += 1;
	write(1, "pb\n", 3);
}
