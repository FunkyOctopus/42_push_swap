/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:12:20 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 16:05:12 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_double_free(char	**string)
{
	int	i;

	i = 0;
	if (!string)
		return ;
	while (string[i] != NULL)
	{
		ft_single_free(&string[i]);
		i++;
	}
	free(string);
	string = 0;
}
