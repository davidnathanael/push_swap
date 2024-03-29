/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 13:00:19 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/27 13:00:20 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_bottom(t_push_swap *data)
{
	ft_rra(data);
	ft_rra(data);
	ft_sa(data);
	ft_ra(data);
	ft_ra(data);
}

void	ft_normal_sort(t_push_swap *data)
{
	int min;
	int min_pos;

	min = 0;
	while (!ft_is_sorted(data->stack_a))
	{
		if (ft_is_special_case(data))
			break ;
		min = ft_get_min(data->stack_a);
		min_pos = ft_get_min_pos(data->stack_a);
		if (data->nb_a / 2 < min_pos)
			while (data->stack_a->content != min)
				ft_rra(data);
		else
			while (data->stack_a->content != min)
				ft_ra(data);
		if (!ft_is_sorted(data->stack_a))
			ft_pb(data);
	}
	while (data->nb_b > 0)
		ft_pa(data);
}

void	ft_handle_three_elems(t_push_swap *data)
{
	int		*elems;
	int		pos;

	elems = ft_get_3_elems(data);
	pos = ft_get_min_pos(data->stack_a);
	if (pos == 0)
	{
		ft_rra(data);
		ft_sa(data);
	}
	else if (pos == 1)
		ft_ra(data);
	else
	{
		if (elems[0] < elems[1])
			ft_rra(data);
		else
		{
			ft_ra(data);
			ft_sa(data);
		}
	}
}
