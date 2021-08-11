/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:46:16 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rb(int *array_b, int size_b)
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
	write(1, "rb\n", 3);
}
