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

void	ft_sa(t_push_swap *data)
{
//	if (!data->option_m)
//		ft_print_operation(SA);
	ft_swap(&data->stack_a);
	data->sa++;
	data->nb_operations++;
//	ft_print_separator(data);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
}

void	ft_sb(t_push_swap *data)
{
//	if (!data->option_m)
//		ft_print_operation(SB);
	ft_swap(&data->stack_b);
	data->sb++;
	data->nb_operations++;
//	ft_print_separator(data);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
}

void	ft_ss(t_push_swap *data)
{
//	if (!data->option_m)
//		ft_print_operation(SS);
	ft_swap(&data->stack_a);
	ft_swap(&data->stack_b);
	data->ss++;
	data->nb_operations++;
	ft_print_separator(data);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
}

void	ft_pa(t_push_swap *data)
{
//	if (!data->option_m)
//		ft_print_operation(PA);
	ft_push(&data->stack_b, &data->stack_a);
	data->nb_a = (data->nb_b > 0) ? data->nb_a + 1 : data->nb_a;
	data->nb_b = (data->nb_b > 0) ? data->nb_b - 1 : data->nb_b;
	data->pa++;
	data->nb_operations++;
//	ft_print_separator(data);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
}

void	ft_pb(t_push_swap *data)
{
//	if (!data->option_m)
//		ft_print_operation(PB);
	ft_push(&data->stack_a, &data->stack_b);
	data->nb_b = (data->nb_a > 0) ? data->nb_b + 1 : data->nb_b;
	data->nb_a = (data->nb_a > 0) ? data->nb_a - 1 : data->nb_a;
	data->pb++;
	data->nb_operations++;
//	ft_print_separator(data);
	if (data->option_v)
	{
		ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
		ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
	}
}
