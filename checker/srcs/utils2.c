/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 13:21:07 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/31 13:21:09 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool		ft_needs_swap_top(t_push_swap *data)
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
			return (TRUE);
	}
	return (FALSE);
}

t_bool		ft_needs_swap_bottom(t_push_swap *data)
{
	int			tmp[3];
	t_stack		*stack;

	stack = data->stack_a;
	while (stack->next)
		stack = stack->next;
	tmp[0] = stack->content;
	tmp[1] = stack->prev->content;
	tmp[2] = stack->prev->prev->content;
	if (tmp[0] > tmp[2] && tmp[1] > tmp[2]
		&& tmp[1] > tmp[2] && ft_is_prev_sorted(stack->prev))
		return (TRUE);
	return (FALSE);
}

int			*ft_get_3_elems(t_push_swap *data)
{
	t_stack		*stack;
	int			*elems;

	stack = data->stack_a;
	elems = (int *)malloc(sizeof(*elems) * 3);
	if (!elems)
		return (NULL);
	elems[0] = stack->content;
	elems[1] = stack->next->content;
	elems[2] = stack->next->next->content;
	return (elems);
}

t_bool		ft_is_special_case(t_push_swap *data)
{
	if (ft_needs_swap_top(data))
		ft_sa(data);
	else if (data->nb_a == 3)
		ft_handle_three_elems(data);
	else if (ft_needs_swap_bottom(data))
		ft_swap_bottom(data);
	else
		return (FALSE);
	return (TRUE);
}
