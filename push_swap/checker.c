/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:39:10 by evgeniyabur       #+#    #+#             */
/*   Updated: 2021/10/03 23:49:01 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	instructions(char *instr, t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	
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
	while (i < argc && argv[i + i])
	{
		a_arr[i].value = atoi_ps(argv[i + 1]);
		a_arr[i].i = -1;
		a_arr[i].flag = 'n';
		i++;
	}
	index_array(a_arr, data, argc - 1);
	if (bubble_sorting(a_arr, data->b_len))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	check_instruction(a_arr, b_arr, data);
	return (0);
}
