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

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"
#include "limits.h"

# define FALSE 0
# define TRUE 1

typedef struct          s_stack
{
	int                	content;
	struct s_stack      *next;
	struct s_stack		*prev;
}                       t_stack;

typedef	unsigned char	t_bool;

typedef struct			s_push_swap
{
	int					nb_operations;
	int					nb_elem;
	t_stack				*stack_a;
	t_stack				*stack_b;
	int					nb_a;
	int					nb_b;
	int					min_a;
	int					min_b;
}                       t_push_swap;



t_stack					*ft_check_arg(char **argv, int argc, t_push_swap *data);
t_stack					*lst_new(int val);
void					lst_add(t_stack **alst, t_stack *new);
t_bool					ft_is_sorted(t_stack *stack);

void					ft_swap(t_stack **stack);
void					ft_push(t_stack **stack_src, t_stack **stack_dest);
void					ft_rotate(t_stack **stack);
void					ft_reverse(t_stack **stack);

void					ft_sa(t_push_swap *data);
void					ft_sb(t_push_swap *data);
void					ft_ss(t_push_swap *data);
void					ft_pa(t_push_swap *data);
void					ft_pb(t_push_swap *data);
void					ft_ra(t_push_swap *data);
void					ft_rb(t_push_swap *data);
void					ft_rr(t_push_swap *data);
void					ft_rra(t_push_swap *data);
void					ft_rrb(t_push_swap *data);
void					ft_rrr(t_push_swap *data);

void					ft_print_stacks(t_push_swap *data);
void 					ft_print_data(t_push_swap *data);

#endif
