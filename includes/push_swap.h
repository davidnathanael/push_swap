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

typedef struct          s_stack
{
	int                	content;
	struct s_stack      *next;
}                       t_stack;

typedef struct			s_push_swap
{
	int					nb_elem;
	t_stack				*stack_a;
	t_stack				*stack_b;
}                       t_push_swap;



t_stack	*ft_check_arg(char **argv, int argc);
t_stack  *lst_new(int val);
void	lst_add(t_stack **alst, t_stack *new);
void	ft_swap(t_stack **stack);
void	ft_push(t_stack **stack_src, t_stack **stack_dest);
void	ft_rotate(t_stack **stack);
void	ft_reverse(t_stack **stack);

#endif
