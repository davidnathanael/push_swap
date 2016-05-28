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
	if (data->option_v)
		ft_printf("{cyan}{bold}rra{eoc} ");
	ft_reverse(&data->stack_a);
	data->rra++;
	data->nb_operations++;
}

void ft_rrb(t_push_swap *data)
{
	if (data->option_v)
		ft_printf("{cyan}{bold}rrb{eoc} ");
	ft_reverse(&data->stack_b);
	data->rrb++;
	data->nb_operations++;
}

void ft_rrr(t_push_swap *data)
{
	if (data->option_v)
		ft_printf("{cyan}{bold}rrr{eoc} ");
	ft_reverse(&data->stack_a);
	ft_reverse(&data->stack_b);
	data->rrr++;
	data->nb_operations++;
}
