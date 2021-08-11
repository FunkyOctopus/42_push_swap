/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgerret <olgerret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 08:04:15 by olgerret          #+#    #+#             */
/*   Updated: 2021/08/10 11:07:30 by olgerret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	ft_highest_int(char *argv[], int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (ft_long_long_atoi(argv[i]) < -2147483648
			|| ft_long_long_atoi(argv[i]) > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_not_int(char *argv[], int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		if ((argv[i][j] == '-' && argv[i][j + 1] == '\0')
			|| (argv[i][j] == '-' && argv[i][j + 1] == '+'))
			return (1);
		if (argv[i][j] == '-')
			j++;
		if (argv[i][j] == '+' && argv[i][j + 1] == '\0')
			return (1);
		if (argv[i][j] == '+')
			j++;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_same_number(char *argv[], int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_error_checker(int argc, char *argv[], int size)
{
	int	i;

	i = 0;
	if (ft_same_number(argv, size) == 1 || ft_not_int(argv, size) == 1
		|| ft_highest_int(argv, size) == 1 || argc < 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
