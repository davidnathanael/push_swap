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

int		ft_get_min_index(t_push_swap *data)
{
	t_stack		*stack;
	int 		index;
	int 		j;

	stack = data->stack_a;
	index = 0;
	j = 0;
	while (stack)
	{
		if (stack->content < data->min_a)
		{
			index = j;
			data->min_a = stack->content;
		}
		j++;
		stack = stack->next;
	}
	return index;
}

void push_swap(t_push_swap *data)
{
	int min_index;

	min_index = ft_get_min_index(data);
	ft_print_data(data);
}

static t_push_swap		*ft_set_data(int argc, char **argv)
{
	t_push_swap		*data;

	data = (t_push_swap *)malloc(sizeof(*data));
	if (!data)
		return (NULL);
	data->stack_a = ft_check_arg(argv, argc, data);
	data->stack_b = NULL;
	data->nb_a = data->nb_elem;
	data->nb_b = 0;
	data->min_a = data->stack_a->content;
	data->min_b = 0;
	return (data);
}

int						main(int argc, char **argv)
{
	t_push_swap		*data;
	t_stack			*lst;

	data = ft_set_data(argc, argv);
	push_swap(data);
	return (0);
}
