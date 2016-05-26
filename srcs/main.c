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

t_bool	ft_is_sorted(t_stack *stack)
{
	if (!stack)
		return TRUE;
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return FALSE;
		stack = stack->next;
	}
	return TRUE;
}

int		ft_get_min_index(t_push_swap *data)
{
	t_stack		*stack;
	int 		min;
	int 		j;

	stack = data->stack_a;
	min = stack->content;
	j = 0;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return min;
}

void push_swap(t_push_swap *data)
{
	int min_index;
	int min;

	min = 0;
	while (!ft_is_sorted(data->stack_a))
	{
		min = ft_get_min_index(data);
		while (data->stack_a->content != min)
			ft_ra(data);
		ft_pb(data);
	}
	while (data->nb_b > 0)
		ft_pa(data);
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
