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

void	ft_swap(t_list **stack)
{
	t_list *tmp;

	tmp = NULL;
	if (!*stack)
		return ;
	if (!*stack->next)
		return ;
	tmp = *stack->next;
	*stack->next = tmp->next;
	tmp->next = *stack;
	stack = tmp;
}

void	ft_push(t_list **stack_src, t_list **stack_dest)
{
	t_list *tmp;

	tmp = NULL;
	if (!*stack_src)
		return;
	tmp = *stack_src;
	stack_src = tmp->next;
	tmp->next = *stack_dest;
	stack_dest = tmp;
}

void	ft_rotate(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;
	if (!*stack)
		return;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	tmp->next->next = NULL;
	stack = *stack->next;
}

void ft_reverse(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;
	if (!*stack)
		return;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack;
	tmp->next->next = NULL;
	stack = *stack->next;

}
