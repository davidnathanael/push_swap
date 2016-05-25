/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adompe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 15:19:39 by adompe            #+#    #+#             */
/*   Updated: 2016/05/25 15:19:50 by adompe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include "limits.h"

typedef struct          s_swap
{
	int                *content;
	struct s_swap      *next;
}                       t_swap;


t_swap	*ft_check_arg(char **argv, int argc);
t_swap  *lst_new(int val);
void	lst_add(t_swap **alst, t_swap *new);

#endif
