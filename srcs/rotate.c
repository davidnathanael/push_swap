/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 16:07:01 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/26 16:07:03 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_push_swap *data)
{
	ft_print_operation(RA);
	ft_rotate(&data->stack_a);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
	data->ra++;
	data->nb_operations++;
}

void ft_rb(t_push_swap *data)
{
	ft_print_operation(RB);
	ft_rotate(&data->stack_b);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
	data->rb++;
	data->nb_operations++;
}

void ft_rr(t_push_swap *data)
{
	ft_print_operation(RR);
	ft_rotate(&data->stack_a);
	ft_rotate(&data->stack_b);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
	data->rr++;
	data->nb_operations++;
}
