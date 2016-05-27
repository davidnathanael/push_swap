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

t_bool	ft_needs_swap_top(t_push_swap *data)
{
	int			tmp[3];
	t_stack		*stack;

	stack = data->stack_a;
	if (data->nb_elem == 2 && !ft_is_sorted(stack))
		return (TRUE);
	else if (data->nb_elem >= 3)
	{
		tmp[0] = stack->content;
		tmp[1] = stack->next->content;
		tmp[2] = stack->next->next->content;
		if (tmp[0] < tmp[2] && tmp[1] < tmp[2] &&
			tmp[0] > tmp[1] && ft_is_sorted(stack->next->next))
			return TRUE;
	}
	return (FALSE);
}

t_bool	ft_needs_swap_bottom(t_push_swap *data)
{
	t_stack *tmp;

	tmp = data->stack_a;
	while (tmp->next)
		tmp = tmp->next;
	if (ft_is_prev_sorted(tmp->prev))
		return (TRUE);
	return (FALSE);
}

void ft_swap_bottom(t_push_swap *data)
{
	ft_printf("swap_bottom sort\n");
	if (data->nb_elem == 3)
	{
		ft_ra(data);
		ft_sa(data);
		return ;
	}
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

	min = 0;
	while (!ft_is_sorted(data->stack_a))
	{
		min = ft_get_min(data);
		while (data->stack_a->content != min)
			ft_ra(data);
		if (!ft_is_sorted(data->stack_a))
			ft_pb(data);
	}
	while (data->nb_b > 0)
		ft_pa(data);
}
