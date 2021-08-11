/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:45:50 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_sa_static(int *array_a, int size_a)
{
	int	temp;

	if (size_a <= 1)
		return ;
	temp = array_a[1];
	array_a[1] = array_a[0];
	array_a[0] = temp;
}

static void	ft_sb_static(int *array_b, int size_b)
{
	int	temp;

	if (size_b <= 1)
		return ;
	temp = array_b[1];
	array_b[1] = array_b[0];
	array_b[0] = temp;
}

void	ft_ss(int *array_a, int *array_b, int size_a, int size_b)
{
	ft_sa_static(array_a, size_a);
	ft_sb_static(array_b, size_b);
	write(1, "ss\n", 3);
}
