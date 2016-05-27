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
	ft_printf("\e[1;1H\e[2J");
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
	data->stack_a = ft_check_arg(argv, argc, data);
	if (!data->stack_a)
		return (NULL);
	data->stack_b = NULL;
	data->nb_a = data->nb_elem;
	data->nb_b = 0;
	data->nb_operations = 0;
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
		push_swap(data);
	report(data);
	return (0);
}
