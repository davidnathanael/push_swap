/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 13:03:23 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/27 13:03:24 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	ft_is_prev_sorted(t_stack *stack)
{
	if (!stack)
		return TRUE;
	while (stack->prev)
	{
		if (stack->content < stack->prev->content)
			return FALSE;
		stack = stack->prev;
	}
	return TRUE;
}

t_bool	ft_is_sorted(t_stack *stack)
{
	if (!stack)
		return TRUE;
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return FALSE;
		stack = stack->next;
	}
	return TRUE;
}

int		ft_get_min(t_push_swap *data)
{
	t_stack		*stack;
	int 		min;
	int 		j;

	stack = data->stack_a;
	min = stack->content;
	j = 0;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return min;
}

int	ft_get_min_pos(t_push_swap *data)
{
	t_stack		*stack;
	int 		min;
	int			pos;
	int			j;

	j = 0;
	stack = data->stack_a;
	min = stack->content;
	while (stack)
	{
		j++;
		if (stack->content < min)
		{
			pos = j;
			min = stack->content;
		}
		stack = stack->next;
	}
	return pos;
}

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
