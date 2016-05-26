#include "push_swap.h"

void ft_print_stacks(t_push_swap *data)
{
	t_stack *tmp = data->stack_a;
	ft_printf("{red}Stack A ({bold}{green}%d{eoc} elements | min : {bold}{green}%d{red}){green} -> %s{eoc}\n\n", data->nb_a, data->min_a, (ft_is_sorted(data->stack_a) ? "SORTED" : "NOT SORTED"));
	while (tmp)
	{
		ft_printf("{bold}%10d{eoc}\n", tmp->content);
		tmp = tmp->next;
	}
	tmp = data->stack_b;
	ft_printf("\n{red}Stack B ({bold}{green}%d{eoc} elements | min : {bold}{green}%d{red}){green} -> %s{eoc}\n\n", data->nb_b, data->min_b, (ft_is_sorted(data->stack_b) ? "SORTED" : "NOT SORTED"));
	while (tmp)
	{
		ft_printf("{bold}%10d{eoc}\n", tmp->content);
		tmp = tmp->next;
	}
}

void ft_print_data(t_push_swap *data)
{
	ft_printf("{red}-------- DATA --------{eoc}\n\n");
	ft_printf("OPERATIONS DONE : {red}%d{eoc}\n\n", data->nb_operations);
	ft_printf("TOTAL ELEMENTS : {red}%d{eoc}\n\n", data->nb_elem);
	ft_print_stacks(data);
}
