/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adompe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/15 15:58:24 by adompe            #+#    #+#             */
/*   Updated: 2016/06/15 15:58:27 by adompe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_operation     ft_valid_input(char *str)
{
    if (ft_strcmp("sa", str) == 0)
        return (SA);
    else if (ft_strcmp("sb", str) == 0)
        return (SB);
    else if (ft_strcmp("ss", str) == 0)
        return (SS);
    else if (ft_strcmp("pa", str) == 0)
        return (PA);
    else if (ft_strcmp("pb", str) == 0)
        return (PB);
    else if (ft_strcmp("ra", str) == 0)
        return (RA);
    else if (ft_strcmp("rb", str) == 0)
        return (RB);
    else if (ft_strcmp("rra", str) == 0)
        return (RRA);
    else if (ft_strcmp("rrb", str) == 0)
        return (RRB);
    else if (ft_strcmp("rrr", str) == 0)
        return (RRR);
    return (-1);
}

void	ft_make_operation(t_push_swap *data, t_operation operation)
{
	if (operation == SA)
		ft_sa(data);
	if (operation == SB)
		ft_sb(data);
	if (operation == SS)
		ft_ss(data);
	if (operation == PA)
		ft_pa(data);
	if (operation == PB)
		ft_pb(data);
	if (operation == RA)
		ft_ra(data);
	if (operation == RB)
		ft_rb(data);
	if (operation == RR)
		ft_rr(data);
	if (operation == RRA)
		ft_rra(data);
	if (operation == RRB)
		ft_rrb(data);
	if (operation == RRR)
		ft_rrr(data);
}

t_bool          ft_get_input(t_push_swap *data)
{
    t_operation ope;
    char        *buf;

    ope = NULL;
    while (get_next_line(0, &buf) && (!ft_is_sorted(data->stack_a) || data->nb_b > 0))
    {
        ope = ft_valid_input(buf);
        if (ope == -1)
            return (FALSE);
        ft_make_operation(data, ope);
        if (ft_is_sorted(data->stack_a) && data->nb_b == 0)
        {
            ft_printf("OK\n");
            return (TRUE);
        }
        //ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
    }
    ft_printf("KO\n");
    return (TRUE);
}
