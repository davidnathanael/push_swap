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
	ft_printf("{red}{bold}ra{eoc}\n");
	ft_rotate(&data->stack_a);
	data->nb_operations++;
}

void ft_rb(t_push_swap *data)
{
	ft_printf("{red}{bold}rb{eoc}\n");
	ft_rotate(&data->stack_b);
	data->nb_operations++;
}

void ft_rr(t_push_swap *data)
{
	ft_printf("{red}{bold}rr{eoc}\n");
	ft_rotate(&data->stack_a);
	ft_rotate(&data->stack_b);
	data->nb_operations++;
}
