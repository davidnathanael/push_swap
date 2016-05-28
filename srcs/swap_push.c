/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_swap_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 16:02:29 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/26 16:02:31 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_push_swap *data)
{
	if (data->option_v)
		ft_printf("{red}{bold}sa{eoc} ");
	ft_swap(&data->stack_a);
	data->nb_operations++;
}

void ft_sb(t_push_swap *data)
{
	if (data->option_v)
		ft_printf("{red}{bold}sb{eoc} ");
	ft_swap(&data->stack_b);
	data->nb_operations++;
}

void ft_ss(t_push_swap *data)
{
	if (data->option_v)
		ft_printf("{red}{bold}ss{eoc} ");
	ft_swap(&data->stack_a);
	ft_swap(&data->stack_b);
	data->nb_operations++;
}

void ft_pa(t_push_swap *data)
{
	if (data->option_v)
		ft_printf("{red}{bold}pa{eoc} ");
	ft_push(&data->stack_b, &data->stack_a);
	data->nb_a = (data->nb_b > 0) ? data->nb_a + 1 : data->nb_a;
	data->nb_b = (data->nb_b > 0) ? data->nb_b - 1 : data->nb_b;
	data->nb_operations++;
}

void ft_pb(t_push_swap *data)
{
	if (data->option_v)
		ft_printf("{red}{bold}pb{eoc} ");
	ft_push(&data->stack_a, &data->stack_b);
	data->nb_b = (data->nb_a > 0) ? data->nb_b + 1 : data->nb_b;
	data->nb_a = (data->nb_a > 0) ? data->nb_a - 1 : data->nb_a;
	data->nb_operations++;
}
