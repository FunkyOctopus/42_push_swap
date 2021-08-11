/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:12:20 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 16:05:13 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_custom_free(int **array_a, int **array_b)
{
	free(*array_a);
	*array_a = 0;
	free(*array_b);
	*array_b = 0;
}
