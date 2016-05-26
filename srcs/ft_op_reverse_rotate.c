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
	ft_printf("{red}{bold}rra{eoc}\n");
	ft_reverse(&data->stack_a);
}

void ft_rrb(t_push_swap *data)
{
	ft_printf("{red}{bold}rrb{eoc}\n");
	ft_reverse(&data->stack_b);
}

void ft_rrr(t_push_swap *data)
{
	ft_printf("{red}{bold}rrr{eoc}\n");
	ft_rra(data);
	ft_rrb(data);
}
