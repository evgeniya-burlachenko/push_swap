#include "push_swap.h"

void	apply_instructions(t_arr *a_arr, t_arr *b_arr, t_data *data, int len)
{
	if (data->a_len == 2)
		sa(a_arr, data, 1);
	else if (data->a_len == 3)
		three_elements(a_arr, data);
	else
		push_swap(a_arr, b_arr, data);
	if (check_if_sorted(a_arr, len))
	{
		free_all(a_arr, b_arr, data);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_arr	*a_arr;
	t_arr	*b_arr;
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (0);
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
	if (check_if_sorted(a_arr, argc - 1))
		return (0);
	apply_instructions(a_arr, b_arr, data, argc - 1);
	return (0);
}
