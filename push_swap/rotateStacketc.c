#include "push_swap.h"

void	rotate_2(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res)
{
	int	b_rr;

	b_rr = b_arr[res[2]].rr;
	while (res[1] > 0)
	{
		rra(a_arr, data, 1);
		res[1]--;
	}
	while (b_rr > 0)
	{
		rb(b_arr, data, 1);
		b_rr--;
	}	
}

void	rotate_3(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res)
{
	int	b_rrr;

	b_rrr = b_arr[res[2]].rrr;
	while (res[0] > 0)
	{
		ra(a_arr, data, 1);
		res[0]--;
	}
	while (b_rrr > 0)
	{
		rrb(b_arr, data, 1);
		b_rrr--;
	}
}

void	finish_rotate(t_arr *a_arr, t_info *data, int i)
{
	int	rr[2];

	while (a_arr[i].i != 0)
		i++;
	count_steps(a_arr, data->a_len);
	rr[0] = a_arr[i].rr;
	rr[1] = a_arr[i].rrr;
	if (rr[0] <= rr[1])
	{
		while (rr[0] > 0)
		{
			ra(a_arr, data, 1);
			rr[0]--;
		}
	}
	else if (rr[0] > rr[1])
	{
		while (rr[1] > 0)
		{
			rra(a_arr, data, 1);
			rr[1]--;
		}	
	}
}
