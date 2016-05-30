/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 16:08:23 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/26 16:08:25 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rra(t_push_swap *data)
{
	ft_print_operation(RRA);
	ft_reverse(&data->stack_a);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
	data->rra++;
	data->nb_operations++;
}

void ft_rrb(t_push_swap *data)
{
	ft_print_operation(RRB);
	ft_reverse(&data->stack_b);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
	data->rrb++;
	data->nb_operations++;
}

void ft_rrr(t_push_swap *data)
{
	ft_print_operation(RRR);
	ft_reverse(&data->stack_a);
	ft_reverse(&data->stack_b);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
	data->rrr++;
	data->nb_operations++;
}
