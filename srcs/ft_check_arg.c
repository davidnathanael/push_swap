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
#include <stdio.h>

static int         ft_check_double(int *tab, int argc)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < argc - 2)
    {
        while (j < argc - 2)
        {
            if (tab[i] == tab[j] && j != i)
                return (0);
            j++;
        }
        j = 0;
        i++;
    }
    return (1);
}

static int         ft_check_digit(char *str)
{
    while (*str)
    {
        if (!ft_isdigit(*str) || *str == '-' || *str == '+')
            return (0);
        str++;
    }
    return (1);
}

t_stack		*ft_check_arg(char **argv, int argc, t_push_swap *data)
{
    int     tab[argc - 1];
    int     i;
    t_stack  *lst;

    lst = NULL;
    i = argc - 1;
    if (argc == 1)
        return (NULL);
    while (i > 0)
    {
        if (!ft_check_digit(argv[i]))
            return (NULL);
        if (lst == NULL)
            lst = lst_new(ft_atoi(argv[i]));
        else
            lst_add(&lst, lst_new(ft_atoi(argv[i])));
        tab[i - 1] = ft_atoi(argv[i]);
        i--;
		data->nb_elem++;
    }
    if (!ft_check_double(tab, argc))
        return (NULL);
    return (lst);
}
