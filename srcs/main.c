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

static t_push_swap		*ft_set_data(int argc, char **argv)
{
	t_push_swap		*data;

	data = (t_push_swap *)malloc(sizeof(*data));
	if (!data)
		return (NULL);
	data->stack_a = ft_check_arg(argv, argc, data);
	t_stack *tmp = data->stack_a;
	ft_printf("{blue}nb elem : %d\n\n{eoc}", data->nb_elem);
	ft_swap(&data->stack_a);
	while (tmp)
	{
		ft_printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	return (data);
}

int						main(int argc, char **argv)
{
	t_push_swap		*data;
	t_stack			*lst;

	data = ft_set_data(argc, argv);
	return (0);
}
