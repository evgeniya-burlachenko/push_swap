/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:39:10 by evgeniyabur       #+#    #+#             */
/*   Updated: 2021/10/06 13:04:22 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	instructions(char *instr, t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if (!ft_strncmp(instr, "sa", 2) && ft_strlen(instr) == 2)
		sa(a_arr, data, 2);
	else if (!ft_strncmp(instr, "sb", 2) && ft_strlen(instr) == 2)
		sb(a_arr, data, 2);
	else if (!ft_strncmp(instr, "ss", 2) && ft_strlen(instr) == 2)
		ss(a_arr, b_arr, data);
	else if (!ft_strncmp(instr, "pa", 2) && ft_strlen(instr) == 2)
		pa(a_arr, b_arr, data);
	else if (!ft_strncmp(instr, "pb", 2) && ft_strlen(instr) == 2)
		pb(a_arr, b_arr, data);
	else if (!ft_strncmp(instr, "ra", 2) && ft_strlen(instr) == 2)
		ra(a_arr, data, 2);
	else if (!ft_strncmp(instr, "rb", 2) && ft_strlen(instr) == 2)
		rb(a_arr, data, 2);
	else if (!ft_strncmp(instr, "rr", 2) && ft_strlen(instr) == 2)
		rr(a_arr, b_arr, data);
	else if (!ft_strncmp(instr, "rra", 2) && ft_strlen(instr) == 3)
		rra(a_arr, data, 2);
	else if (!ft_strncmp(instr, "rrb", 2) && ft_strlen(instr) == 3)
		rrb(a_arr, data, 2);
	else if (!ft_strncmp(instr, "rrr", 2) && ft_strlen(instr) == 3)
		rrr(a_arr, b_arr, data);
	else
		return (0);
	return (1);
}

void	check_instruction(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	int		res;
	char	*line;

	line = NULL;
	while (1)
	{
		res = get_next_line(0, &line);
		if (res == 0)
			break ;
		if (!instructions(line, a_arr, b_arr, data))
		{
			ft_putstr_fd("Error", 1);
			exit(1);
		}
	}
}

t_info	*new_data(int len)
{
	t_info	*data;

	data = malloc(sizeof(t_info));
	if (!data)
		return (0);
	data->a_len = len;
	data->b_len = 0;
	data->print = 1;
	return (data);
}

int	main(int argc, char **argv)
{
	int		i;
	t_arr	*a_arr;
	t_arr	*b_arr;
	t_info	*data;

	data = new_data(argc - 1);
	check_argc_argv(argc, argv);
	a_arr = new_array(argc);
	b_arr = new_array(argc);
	i = 0;
	while (i < argc - 1 )
	{
		a_arr[i].value = atoi_ps(argv[i + 1]);
		a_arr[i].i = -1;
		a_arr[i].flag = 'n';
		i++;
	}
	index_array(a_arr, data, argc - 1);
	if (bubble_sorting(a_arr, argc - 1))
		return (0);
	check_instruction(a_arr, b_arr, data);
	if (bubble_sorting(a_arr, argc - 1))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	free_all(a_arr, b_arr, data);
	return (0);
}
