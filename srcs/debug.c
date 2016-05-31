#include "push_swap.h"

void ft_print_stack(t_stack *stack, char stack_letter, int nb_elem, t_orientation or)
{
	t_stack *tmp = stack;
	ft_printf("\n{red}Stack %c ({bold}{green}%d{eoc} elements{red}){bold}", stack_letter, nb_elem);
	(ft_is_sorted(stack) ? ft_printf("{green}{bold} -> %s{eoc}\n\n", "SORTED") : ft_printf("{red}{bold} -> %s{eoc}\n\n", "NOT SORTED"));
	if (!tmp)
		ft_printf("{bold}         NO ELEMENT{eoc}\n");
	while (tmp)
	{
		ft_printf("{bold}%10d{eoc}%c", tmp->content, or);
		tmp = tmp->next;
	}
}

void ft_print_data(t_push_swap *data)
{
	ft_printf("\n{red}-------- %s --------{eoc}\n\n", "DATA");
	ft_printf("OPERATIONS DONE : {red}%d{eoc}\n\n", data->nb_operations);
	ft_printf("TOTAL ELEMENTS : {red}%d{eoc}\n", data->nb_elem);
	ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
	ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
}

void ft_report(t_push_swap *data)
{
	ft_printf("\n\n{red}-------- %s --------{eoc}\n\n", "REPORT");

	ft_printf("SORTING DONE WITHIN {bold}{green}%d{eoc} OPERATIONS\n\n", data->nb_operations);
	ft_printf("TOTAL ELEMENTS : {bold}{green}%d{eoc}\n\n", data->nb_elem);
	ft_printf("MIN VALUE : {bold}{green}%d{eoc}\n\n", ft_get_min(data->stack_a));
	ft_printf("MAX VALUE : {bold}{green}%d{eoc}\n\n", ft_get_max(data->stack_a));
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

void ft_print_operation(t_operation operation)
{
	if (operation == SA)
		ft_printf("{bold}{red}sa");
	if (operation == SB)
		ft_printf("{bold}{red}sb");
	if (operation == SS)
		ft_printf("{bold}{red}ss");
	if (operation == PA)
		ft_printf("{bold}{green}pa");
	if (operation == PB)
		ft_printf("{bold}{green}pb");
	if (operation == RA)
		ft_printf("{bold}{yellow}ra");
	if (operation == RB)
		ft_printf("{bold}{yellow}rb");
	if (operation == RR)
		ft_printf("{bold}{yellow}rr");
	if (operation == RRA)
		ft_printf("{bold}{cyan}rra");
	if (operation == RRB)
		ft_printf("{bold}{cyan}rrb");
	if (operation == RRR)
		ft_printf("{bold}{cyan}rrr");
	ft_printf("{eoc}");
}

void ft_print_separator(t_push_swap *data)
{
	if (data->option_m)
		return ;
	if (ft_is_sorted(data->stack_a) && data->nb_elem == data->nb_a)
		ft_putchar(VERTICAL);
	else
		ft_putchar(HORIZONTAL);
}

void ft_print_nb_operations(t_push_swap *data)
{
	ft_printf("\n{bold}{green}%d OPERATIONS{eoc}\n", data->nb_operations);
}
