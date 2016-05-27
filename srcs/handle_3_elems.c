/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_3_elems.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 15:00:52 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/27 15:00:53 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*ft_get_3_elems(t_push_swap *data)
{
	t_stack *stack;
	int	*elems;

	stack = data->stack_a;
	elems = (int *)malloc(sizeof(*elems) * 3);
	if (!elems)
		return (NULL);
	elems[0] = stack->content;
	elems[1] = stack->next->content;
	elems[2] = stack->next->next->content;
	return (elems);
}

void	ft_min_is_first(t_push_swap *data, int *elems)
{
	if (elems[1] < elems[2])
		return ;
	ft_rra(data);
	ft_sa(data);
}

void	ft_min_is_second(t_push_swap *data, int *elems)
{

}

void	ft_min_is_third(t_push_swap *data, int *elems)
{

}
