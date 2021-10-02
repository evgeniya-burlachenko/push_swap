#include "push_swap.h"

int	instructions(char *instr, t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	if (!ft_strncmp(instr, "sa", 2) && ft_strlen(instr) == 2)
		sa(a_arr, data, 2);
	else if (!ft_strncmp(instr, "sb", 2) && ft_strlen(instr) == 2)
		sb(b_arr, data, 2);
	else if (!ft_strncmp(instr, "ss", 2) && ft_strlen(instr) == 2)
		ss(a_arr, b_arr, data);
	else if (!ft_strncmp(instr, "pa", 2) && ft_strlen(instr) == 2)
		pa(a_arr, b_arr, data);
	else if (!ft_strncmp(instr, "pb", 2) && ft_strlen(instr) == 2)
		pb(a_arr, b_arr, data);
	else if (!ft_strncmp(instr, "ra", 2) && ft_strlen(instr) == 2)
		ra(a_arr, data, 2);
	else if (!ft_strncmp(instr, "rb", 2) && ft_strlen(instr) == 2)
		rb(b_arr, data, 2);
	else if (!ft_strncmp(instr, "rr", 2) && ft_strlen(instr) == 2)
		rr(a_arr, b_arr, data);
	else if (!ft_strncmp(instr, "rra", 3) && ft_strlen(instr) == 3)
		rra(a_arr, data, 2);
	else if (!ft_strncmp(instr, "rrb", 3) && ft_strlen(instr) == 3)
		rrb(b_arr, data, 2);
	else if (!ft_strncmp(instr, "rrr", 3) && ft_strlen(instr) == 3)
		rrr(a_arr, b_arr, data);
	else
		return (0);
	return (1);
}

void	read_instructions(t_arr *a_arr, t_arr *b_arr, t_data *data)
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
			ft_putendl_fd("Error", 1);
			exit(1);
		}
	}
}

t_data	*new_data(int len)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
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
	t_data	*data;

	data = new_data(argc - 1);
	error_management(argc, argv);
	a_arr = new_array(argc);
	b_arr = new_array(argc);
	i = 0;
	while (i < argc && argv[i + 1])
	{
		a_arr[i].num = ps_atoi(argv[i + 1]);
		a_arr[i].i = -1;
		a_arr[i].flag = 'n';
		i++;
	}
	ind_array(a_arr, data, argc - 1);
	read_instructions(a_arr, b_arr, data);
	if (check_if_sorted(a_arr, argc - 1))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return (0);
}
