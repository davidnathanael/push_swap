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
	ft_printf("{red}1st : %d | 2nd : %d{eoc}\n", (*stack)->content, (*stack)->next->content);
	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	ft_push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack *tmp;

	tmp = NULL;
	if (!*stack_src)
		return;
	tmp = *stack_src;
	*stack_src = tmp->next;
	tmp->next = *stack_dest;
	*stack_dest = tmp;
}

void	ft_rotate(t_stack **stack)
{
	t_stack *tmp;

	tmp = *stack;
	if (!*stack)
		return;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	tmp->next->next = NULL;
	*stack = (*stack)->next;
}

void ft_reverse(t_stack **stack)
{
	t_stack	*tmp;
	int		nb_tmp;

	tmp = *stack;
	nb_tmp = 0;
	if (!*stack)
		return;
	while (tmp->next)
	{
		nb_tmp = tmp->next->content;
		tmp->next->content = tmp->content;
		tmp = tmp->next;
	}
	tmp->next = *stack;
	tmp->next->next = NULL;
	*stack = (*stack)->next;

}
