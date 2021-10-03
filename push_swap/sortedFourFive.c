#include "push_swap.h"

void	sorted_four_0(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	pb(a_arr, b_arr, data);
	if (!bubble_sorting(a_arr, data->a_len))
		sorted_three(a_arr, data);
	pa(a_arr, b_arr, data);
}

void	sorted_four_1(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	ra(a_arr, data, 1);
	pb(a_arr, b_arr, data);
	if (!bubble_sorting(a_arr, data->a_len))
		sorted_three(a_arr, data);
	pa(a_arr, b_arr, data);
}

void	sorted_four_2(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	ra(a_arr, data, 1);
	ra(a_arr, data, 1);
	pb(a_arr, b_arr, data);
	if (!bubble_sorting(a_arr, data->a_len))
		sorted_three(a_arr, data);
	pa(a_arr, b_arr, data);
}

void	sorted_four_3(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	rra(a_arr, data, 1);
	pb(a_arr, b_arr, data);
	if (!bubble_sorting(a_arr, data->a_len))
		sorted_three(a_arr, data);
	pa(a_arr, b_arr, data);
}

void	sorted_fiveetc_2(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if (a_arr[4].i == 0)
	{
		rra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if (!bubble_sorting(a_arr, data->a_len))
			sorted_four(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}
}
