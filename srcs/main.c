/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 15:09:48 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/25 15:13:12 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void push_swap(t_push_swap *data)
{
	// ft_printf("\e[1;1H\e[2J");
	if (data->option_v)
		ft_printf("\n{red}-------- %s --------{eoc}\n\n", "OPERATIONS");
	if (ft_needs_swap_top(data))
		ft_sa(data);
	else if (data->nb_elem == 3)
		ft_handle_three_elems(data);
	else if (ft_needs_swap_bottom(data))
		ft_swap_bottom(data);
	else
		ft_normal_sort(data);
}

static t_push_swap		*ft_set_data(int argc, char **argv)
{
	t_push_swap		*data;

	data = (t_push_swap *)malloc(sizeof(*data));
	if (!data)
		return (NULL);
	data->nb_elem = 0;
	data->option_v = FALSE;
	data->option_n = FALSE;
	data->option_r = FALSE;
	data->stack_a = ft_check_arg(argv, argc, data);
	if (!data->stack_a && argc != 1)
		return (NULL);
	data->stack_b = NULL;
	data->nb_a = data->nb_elem;
	data->nb_b = 0;
	data->nb_operations = 0;
	data->sa = 0;
	data->sb = 0;
	data->ss = 0;
	data->pa = 0;
	data->pb = 0;
	data->ra = 0;
	data->rb = 0;
	data->rr = 0;
	data->rra = 0;
	data->rrb = 0;
	data->rrr = 0;
	return (data);
}

int						main(int argc, char **argv)
{
	t_push_swap		*data;
	t_stack			*lst;

	data = ft_set_data(argc, argv);
	if (!data)
		ft_printf("ERROR\n");
	else if (data->nb_elem > 1 && !ft_is_sorted(data->stack_a))
	{
		push_swap(data);
		if (data->option_r)
			ft_report(data);
	}
	return (0);
}
