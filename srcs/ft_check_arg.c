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

int         ft_check_double(t_stack *lst)
{

    return (1);
}

int         ft_check_digit(char *str)
{
    while (*str)
    {
        if (!ft_isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

t_stack		*ft_check_arg(char **argv, int argc, t_push_swap *data)
{
    int     i;
    t_stack  *lst;

    lst = NULL;
    i = argc - 1;
    if (argc == 1)
        return (NULL);
    while (i > 0)
    {
        if (!ft_check_digit(argv[i]))
        {
            printf ("NULL");
            return (NULL);
        }
        printf("%d\n", ft_atoi(argv[i]));
        if (lst == NULL)
            lst = lst_new(ft_atoi(argv[i]));
        else
            lst_add(&lst, lst_new(ft_atoi(argv[i])));
		data->nb_elem++;
        i--;
    }
    return (lst);
}
