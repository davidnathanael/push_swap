/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 15:25:44 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/25 15:25:49 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	int	tmp;

	tmp = 0;
	if (!*stack)
		return ;
	if (!(*stack)->next)
		return ;
	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	ft_push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack *tmp;

	tmp = NULL;
	if (!*stack_src)
		return ;
	tmp = *stack_src;
	*stack_src = tmp->next;
	tmp->next = *stack_dest;
	*stack_dest = tmp;
}

void	ft_rotate(t_stack **stack)
{
	t_stack *tmp;
	t_stack	*first;

	tmp = *stack;
	first = *stack;
	if (!*stack)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	*stack = first->next;
	(*stack)->prev = NULL;
	first->prev = tmp;
	first->next = NULL;
}

void	ft_reverse(t_stack **stack)
{
	t_stack	*tmp;
	t_stack *last;

	tmp = *stack;
	last = NULL;
	if (!*stack)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	last = tmp->prev;
	tmp->next = (*stack);
	(*stack)->prev = tmp;
	tmp->prev = NULL;
	*stack = tmp;
	last->next = NULL;
}
