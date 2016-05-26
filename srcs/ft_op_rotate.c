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
	ft_rotate(&data->stack_a);
}

void ft_rb(t_push_swap *data)
{
	ft_rotate(&data->stack_b);
}

void ft_rr(t_push_swap *data)
{
	ft_ra(data);
	ft_rb(data);
}
