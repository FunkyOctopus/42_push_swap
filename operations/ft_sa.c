/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/02 10:45:53 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_sa(int *array_a, int size_a)
{
	int	temp;

	if (size_a <= 1)
		return ;
	temp = array_a[1];
	array_a[1] = array_a[0];
	array_a[0] = temp;
	write(1, "sa\n", 3);
}
