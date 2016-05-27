/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adompe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 16:41:18 by adompe            #+#    #+#             */
/*   Updated: 2016/05/25 16:41:21 by adompe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *lst_new(int val)
{
    t_stack *new;

    new = (t_stack *)malloc(sizeof(t_stack));
    new->content = val;
    new->next = NULL;
    new->prev = NULL;
    return (new);
}

void	lst_add(t_stack **alst, t_stack *new)
{
	if (alst && new)
	{
        (*alst)->prev = new;
		new->next = *alst;
		*alst = new;
	}
}
