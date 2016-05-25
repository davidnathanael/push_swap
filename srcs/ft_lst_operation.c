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

t_swap  *lst_new(int val)
{
    t_swap *new;

    new = (t_swap *)malloc(sizeof(t_swap));
    new->content = val;
    new->next = NULL;
    return (new);
}

void	lst_add(t_swap **alst, t_swap *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
