/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 13:11:25 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/05/31 13:13:21 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack *stack, char stack_letter, int nb_elem,
		t_orientation or)
{
	t_stack *tmp;

	tmp = stack;
	ft_printf("\n{red}Stack %c ({bold}{green}%d{eoc} elements{red}){bold}",
				stack_letter, nb_elem);
	(ft_is_sorted(stack) ? ft_printf("{green}{bold} -> %s{eoc}\n\n", "SORTED")
				: ft_printf("{red}{bold} -> %s{eoc}\n\n", "NOT SORTED"));
	if (!tmp)
		ft_printf("{bold}         NO ELEMENT{eoc}\n");
	while (tmp)
	{
		ft_printf("{bold}%10d{eoc}%c", tmp->content, or);
		tmp = tmp->next;
	}
}

void	ft_report(t_push_swap *data)
{
	ft_printf("\n\n{red}-------- %s --------{eoc}\n\n", "REPORT");
	ft_printf("SORTING DONE WITHIN {bold}{green}%d{eoc} OPERATIONS\n\n",
				data->nb_operations);
	ft_printf("TOTAL ELEMENTS : {bold}{green}%d{eoc}\n\n", data->nb_elem);
	ft_printf("MIN VALUE : {bold}{green}%d{eoc}\n\n",
				ft_get_min(data->stack_a));
	ft_printf("MAX VALUE : {bold}{green}%d{eoc}\n\n",
				ft_get_max(data->stack_a));
	ft_printf("SA :  {bold}{red}%10d{eoc} TIMES\n\n", data->sa);
	ft_printf("SB :  {bold}{red}%10d{eoc} TIMES\n\n", data->sb);
	ft_printf("SS :  {bold}{red}%10d{eoc} TIMES\n\n", data->ss);
	ft_printf("PA :  {bold}{green}%10d{eoc} TIMES\n\n", data->pa);
	ft_printf("PB :  {bold}{green}%10d{eoc} TIMES\n\n", data->pb);
	ft_printf("RA :  {bold}{yellow}%10d{eoc} TIMES\n\n", data->ra);
	ft_printf("RB :  {bold}{yellow}%10d{eoc} TIMES\n\n", data->rb);
	ft_printf("RR :  {bold}{yellow}%10d{eoc} TIMES\n\n", data->rr);
	ft_printf("RRA : {bold}{cyan}%10d{eoc} TIMES\n\n", data->rra);
	ft_printf("RRB : {bold}{cyan}%10d{eoc} TIMES\n\n", data->rrb);
	ft_printf("RRR : {bold}{cyan}%10d{eoc} TIMES\n\n", data->rrr);
	ft_print_stack(data->stack_a, 'A', data->nb_a, HORIZONTAL);
}

void	ft_print_operation(t_operation operation)
{
	if (operation == SA)
		ft_printf("sa");
	if (operation == SB)
		ft_printf("sb");
	if (operation == SS)
		ft_printf("ss");
	if (operation == PA)
		ft_printf("pa");
	if (operation == PB)
		ft_printf("pb");
	if (operation == RA)
		ft_printf("ra");
	if (operation == RB)
		ft_printf("rb");
	if (operation == RR)
		ft_printf("rr");
	if (operation == RRA)
		ft_printf("rra");
	if (operation == RRB)
		ft_printf("rrb");
	if (operation == RRR)
		ft_printf("rrr");
	//ft_printf("{eoc}");
}

void	ft_print_separator(t_push_swap *data)
{
//	if (data->option_m)
//		return ;
//	if (ft_is_sorted(data->stack_a) && data->nb_elem == data->nb_a)
		ft_putchar(VERTICAL);
//	else
//		ft_putchar(HORIZONTAL);
}

void	ft_print_nb_operations(t_push_swap *data)
{
	ft_printf("\n{bold}{green}%d OPERATIONS{eoc}\n", data->nb_operations);
}
