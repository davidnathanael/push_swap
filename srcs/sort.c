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


void ft_swap_bottom(t_push_swap *data)
{
	ft_printf("swap_bottom sort\n");
	ft_rra(data);
	ft_rra(data);
	ft_sa(data);
	ft_ra(data);
	ft_ra(data);
}

void ft_normal_sort(t_push_swap *data)
{
	ft_printf("normal sort\n");
	int min;
	int min_pos;

	min = 0;
	while (!ft_is_sorted(data->stack_a))
	{
		min = ft_get_min(data);
		min_pos = ft_get_min_pos(data);
		while (data->stack_a->content != min)
		{
			if (data->nb_a / 2 < min_pos)
				ft_rra(data);
			else
				ft_ra(data);
		}
		if (!ft_is_sorted(data->stack_a))
			ft_pb(data);
	}
	while (data->nb_b > 0)
		ft_pa(data);
}

void ft_handle_three_elems(t_push_swap *data)
{
	int		*elems;
	int		pos;

	elems = ft_get_3_elems(data);
	pos = ft_get_min_post(data);
	if (pos == 1)
	{
		ft_ra(data);
		ft_sa(data);
	}

}

// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
