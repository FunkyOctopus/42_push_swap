/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:57:51 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/09 18:08:38 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

char	**ft_input_parser(char **argv)
{
	t_struct2	var;
	char		**arr;

	var.i = 0;
	var.str = ft_strdup("");
	while (argv[var.i] != '\0')
	{
		arr = ft_split(argv[var.i], ' ');
		var.j = 0;
		while (arr[var.j] != '\0')
		{
			var.tmp = ft_strjoin(arr[var.j], ",");
			var.tmp2 = var.str;
			var.str = ft_strjoin(var.tmp2, var.tmp);
			ft_single_free(&var.tmp);
			ft_single_free(&var.tmp2);
			var.j++;
		}
		ft_double_free(arr);
		var.i++;
	}
	arr = ft_split(var.str, ',');
	ft_single_free(&var.str);
	return (arr);
}
