/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adompe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 15:02:45 by adompe            #+#    #+#             */
/*   Updated: 2016/05/25 15:06:37 by adompe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "push_swap.h"

static int			ft_arg_flag(int i, char **argv, t_push_swap *data)
{
	int j;

	j = 1;
	while (i > 0)
	{
		if (argv[i][0] != '-')
			return (0);
		while (argv[i][j])
		{
			if (argv[i][j] == 'v' && !data->option_v)
				data->option_v = TRUE;
			else if (argv[i][j] == 'r' && !data->option_r)
				data->option_r = TRUE;
			else if (argv[i][j] == 'n' && !data->option_n)
				data->option_n = TRUE;
			else if (argv[i][j] == 'm' && !data->option_m)
				data->option_m = TRUE;
			else
				return (0);
			j++;
		}
		j = 1;
		i--;
	}
	return (1);
}

static int			ft_check_double(int *tab, int argc, int start)
{
	int i;
	int j;

	i = start;
	j = start;
	while (i < argc - 1)
	{
		while (j < argc - 1)
		{
			if (tab[i] == tab[j] && j != i)
				return (0);
			j++;
		}
		j = start;
		i++;
	}
	return (1);
}

static int			ft_check_digit(char *str)
{
	if (ft_strlen(str) >= 2 && (*str == '-' || *str == '+'))
		if (!ft_isdigit(str[1]))
			return (0);
	while (*str)
	{
		if (!ft_isdigit(*str) && *str != '-' && *str != '+')
			return (0);
		str++;
	}
	return (1);
}

t_stack				*ft_check_arg(char **argv, int argc, t_push_swap *data)
{
	int			tab[argc - 1];
	int			i;
	long long	nb;
	t_stack		*lst;

	lst = NULL;
	i = argc - 1;
	nb = 0;
	while (i > 0)
	{
		if (!ft_check_digit(argv[i]))
			return ((ft_arg_flag(i, argv, data)
			&& ft_check_double(tab, argc, i)) ? lst : NULL);
			nb = ft_lltoi(argv[i]);
		if (nb < INT_MIN || nb > INT_MAX || ft_strlen(argv[i]) > 11)
			return (NULL);
		(!lst) ? lst = lst_new((int)nb)
				: lst_add(&lst, lst_new((int)nb));
		tab[i - 1] = (int)nb;
		i--;
		data->nb_elem++;
	}
	return ((ft_check_double(tab, argc, i)) ? lst : NULL);
}
