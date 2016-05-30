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

# define HORIZONTAL ' '
# define VERTICAL '\n'

typedef struct          s_stack
{
	int                	content;
	struct s_stack      *next;
	struct s_stack		*prev;
}                       t_stack;

typedef	unsigned char	t_bool;
typedef	unsigned char	t_orientation;
// typedef	unsigned char	t_operation;

typedef enum		e_operation
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
}					t_operation;

typedef struct			s_push_swap
{
	int					nb_operations;
	int					nb_elem;
	t_stack				*stack_a;
	t_stack				*stack_b;
	int					nb_a;
	int					nb_b;
	t_bool				option_v; //verbose
	t_bool				option_n; //nb_operations
	t_bool				option_r; //report
	int					sa;
	int					sb;
	int					ss;
	int					pa;
	int					pb;
	int					ra;
	int					rb;
	int					rr;
	int					rra;
	int					rrb;
	int					rrr;
}                       t_push_swap;



t_stack					*ft_check_arg(char **argv, int argc, t_push_swap *data);
t_stack					*lst_new(int val);
void					lst_add(t_stack **alst, t_stack *new);

t_bool					ft_is_sorted(t_stack *stack);
t_bool					ft_is_prev_sorted(t_stack *stack);
int						ft_get_min(t_stack *stack);
int						ft_get_max(t_stack *stack);
int						ft_get_min_pos(t_stack *stack);

int						*ft_get_3_elems(t_push_swap *data);

t_bool					ft_needs_swap_top(t_push_swap *data);
t_bool					ft_needs_swap_bottom(t_push_swap *data);
void 					ft_swap_bottom(t_push_swap *data);
void					ft_normal_sort(t_push_swap *data);
void 					ft_handle_three_elems(t_push_swap *data);

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

void					ft_print_stack(t_stack *stack, char stack_letter, int nb_elem,
						t_orientation or);
void 					ft_print_data(t_push_swap *data);
void 					ft_print_operation(t_operation operation);
void 					ft_report(t_push_swap *data);

#endif
