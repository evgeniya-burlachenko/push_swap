#include "push_swap.h"

void	rotate_0(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res)
{
	int		b_rr;

	b_rr = b_arr[res[2]].rr;
	if (res[0] <= b_rr)
	{
		while (res[0] > 0)
		{
			rr(a_arr, b_arr, data);
			res[0]--;
			b_rr--;
		}
		while (b_rr > 0)
		{
			rb(b_arr, data, 1);
			b_rr--;
		}
	}
	else if (res[0] > b_rr)
		rotate_0_1(a_arr, b_arr, data, res);
}

void	rotate_0_1(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res)
{
	int	b_rr;

	b_rr = b_arr[res[2]].rr;
	while (b_rr > 0)
	{
		rr(a_arr, b_arr, data);
		b_rr--;
		res[0]--;
	}
	while (res[0] > 0)
	{
		ra(a_arr, data, 1);
		res[0]--;
	}
}

void	rotate_1(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res)
{
	int	b_rrr;

	b_rrr = b_arr[res[2]].rrr;
	if (res[1] <= b_rrr)
	{
		while (res[1] > 0)
		{
			rrr(a_arr, b_arr, data);
			res[1]--;
			b_rrr--;
		}
		while (b_rrr > 0)
		{
			rrb(b_arr, data, 1);
			b_rrr--;
		}
	}
	else if (res[1] > b_rrr)
		rotate_1_1(a_arr, b_arr, data, res);
}

void	rotate_1_1(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res)
{
	int	b_rrr;

	b_rrr = b_arr[res[2]].rrr;
	while (b_rrr > 0)
	{
		rrr(a_arr, b_arr, data);
		res[1]--;
		b_rrr--;
	}
	while (res[1] > 0)
	{
		rra(a_arr, data, 1);
		res[1]--;
	}
}
