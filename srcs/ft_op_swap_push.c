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
	ft_swap(&data->stack_a);
}

void ft_sb(t_push_swap *data)
{
	ft_swap(&data->stack_b);
}

void ft_ss(t_push_swap *data)
{
	ft_sa(data);
	ft_sb(data);
}

void ft_pa(t_push_swap *data)
{
	ft_push(&data->stack_b, &data->stack_a);
}

void ft_pb(t_push_swap *data)
{
	ft_push(&data->stack_a, &data->stack_b);
}
