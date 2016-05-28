#include "push_swap.h"

void ft_print_stack(t_stack *stack, char stack_letter, int nb_elem, t_orientation or)
{
	t_stack *tmp = stack;
	ft_printf("\n{red}Stack %c ({bold}{green}%d{eoc} elements{red}){green}{bold} -> %s{eoc}\n\n", stack_letter, nb_elem, (ft_is_sorted(stack) ? "SORTED" : "NOT SORTED"));
	if (!tmp)
		ft_printf("{bold}         NO ELEMENT{eoc}\n");
	ft_printf("{red}TOP OF STACK{eoc}\n\n");
	while (tmp)
	{
		ft_printf("{bold}%10d{eoc}%c", tmp->content, or);
		tmp = tmp->next;
	}
	ft_printf("\n{red}BOTTOM OF STACK{eoc}\n\n");
}

void ft_print_data(t_push_swap *data)
{
	ft_printf("\n{red}-------- %s --------{eoc}\n\n", "DATA");
	ft_printf("OPERATIONS DONE : {red}%d{eoc}\n\n", data->nb_operations);
	ft_printf("TOTAL ELEMENTS : {red}%d{eoc}\n", data->nb_elem);
	ft_print_stack(data->stack_a, 'A', data->nb_a, VERTICAL);
	ft_print_stack(data->stack_b, 'B', data->nb_b, VERTICAL);
}

void report(t_push_swap *data)
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
	// ft_print_stack(data->stack_a, 'A', data->nb_a, HORIZONTAL);
}
