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

t_bool		ft_is_prev_sorted(t_stack *stack)
{
	if (!stack)
		return (TRUE);
	while (stack->prev)
	{
		if (stack->content < stack->prev->content)
			return (FALSE);
		stack = stack->prev;
	}
	return (TRUE);
}

t_bool		ft_is_sorted(t_stack *stack)
{
	if (!stack)
		return (TRUE);
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (FALSE);
		stack = stack->next;
	}
	return (TRUE);
}

int			ft_get_min(t_stack *stack)
{
	int		min;
	int		j;

	min = stack->content;
	j = 0;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}

int			ft_get_max(t_stack *stack)
{
	int		max;
	int		j;

	max = stack->content;
	j = 0;
	while (stack)
	{
		if (stack->content > max)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}

int			ft_get_min_pos(t_stack *stack)
{
	int		min;
	int		pos;

	pos = 0;
	min = ft_get_min(stack);
	while (stack)
	{
		if (stack->content == min)
			break ;
		pos++;
		stack = stack->next;
	}
	return (pos);
}
