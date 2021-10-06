#include "push_swap.h"

void	main_instruction(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if (data->a_len == 2)
		sa(a_arr, data, 1);
	else if (data->a_len == 5)
		sorted_five(a_arr, b_arr, data);
	else if (data->a_len == 4)
		sorted_four(a_arr, b_arr, data);
	else if (data -> a_len == 3)
		sorted_three(a_arr, data);
	else
		push_swap(a_arr, b_arr, data);
	free_all(a_arr, b_arr, data);
}

int	main(int argc, char **argv)
{
	int		i;
	t_arr	*a_arr;
	t_arr	*b_arr;
	t_info	*data;

	data = malloc(sizeof(t_info));
	if (!data)
		return (0);
	check_argc_argv(argc, argv);
	a_arr = new_array(argc);
	b_arr = new_array(argc);
	i = 0;
	while (i < argc - 1  )
	{
		a_arr[i].value = atoi_ps(argv[i + 1]);
		a_arr[i].i = -1;
		a_arr[i].flag = 'n';
		i++;
	}
	index_array(a_arr, data, argc - 1);
	if (bubble_sorting(a_arr, argc - 1))
	{
		free_all(a_arr, b_arr, data);
		exit(0);
	}
	main_instruction(a_arr, b_arr, data);
	return (0);
}
