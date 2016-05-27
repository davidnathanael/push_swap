#include "push_swap.h"

void ft_print_stack(t_stack *stack, char stack_letter, int nb_elem)
{
	t_stack *tmp = stack;
	ft_printf("\n{red}Stack %c ({bold}{green}%d{eoc} elements{red}){green}{bold} -> %s{eoc}\n\n", stack_letter, nb_elem, (ft_is_sorted(stack) ? "SORTED" : "NOT SORTED"));
	if (!tmp)
		ft_printf("{bold}         NO ELEMENT{eoc}\n");
	while (tmp)
	{
		ft_printf("{bold}%10d{eoc}\n", tmp->content);
		tmp = tmp->next;
	}
}

void ft_print_data(t_push_swap *data)
{
	ft_printf("\n{red}-------- DATA --------{eoc}\n\n");
	ft_printf("OPERATIONS DONE : {red}%d{eoc}\n\n", data->nb_operations);
	ft_printf("TOTAL ELEMENTS : {red}%d{eoc}\n", data->nb_elem);
	ft_print_stack(data->stack_a, 'A', data->nb_a);
	ft_print_stack(data->stack_b, 'B', data->nb_b);
}

void report(t_push_swap *data)
{
	ft_printf("\n{red}-------- REPORT --------{eoc}\n\n");

	ft_printf("SORTING DONE WITHIN {bold}{green}%d{eoc} OPERATIONS\n\n", data->nb_operations);
	ft_printf("TOTAL ELEMENTS : {bold}{green}%d{eoc}\n\n", data->nb_elem);
	ft_printf("MIN VALUE : {bold}{green}%d{eoc}\n\n", ft_get_min(data->stack_a));
	ft_printf("MAX VALUE : {bold}{green}%d{eoc}\n\n", ft_get_max(data->stack_a));
	ft_print_stack(data->stack_a, 'A', data->nb_a);
}
