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

int main(int argc, char **argv)
{
	t_stack **begin;
	t_stack *lst;

	lst = ft_check_arg(argv, argc);
	if (lst == NULL)
	{
		printf ("Error \n");
		return (0);
	}
	begin = &lst;
	// ft_swap(begin);
	while (begin)
	{
		begin = (*begin)->next;
	}
	return (0);
}
