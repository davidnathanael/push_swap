/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adompe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 15:02:45 by adompe            #+#    #+#             */
/*   Updated: 2016/05/25 15:06:37 by adompe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list		*ft_check_arg(char **argv, int argc)
{
    int     i;
    t_list  *lst;

    i = 1;
    if (argc == 0)
        return (NULL);
    while (i < argc)
    {
        if (lst == NULL)
            lst = ft_lstnew(ft_atoi())
        argv[]
    }

}
