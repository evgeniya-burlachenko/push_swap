#include "push_swap.h"

void	rotate_0(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret)
{
	int	b_rr;

	b_rr = b_arr[ret[2]].rr;//0
	if (ret[0] <= b_rr)//
	{
		while (ret[0] > 0)
		{
			rr(a_arr, b_arr, data);
			ret[0]--;
			b_rr--;
		}
		while (b_rr > 0)
		{
			rb(b_arr, data, 1);
			b_rr--;
		}
	}
	else if (ret[0] > b_rr)
		rotate_0_1(a_arr, b_arr, data, ret);
}

void	rotate_1(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret)
{
	int	b_rrr;

	b_rrr = b_arr[ret[2]].rrr;
	if (ret[1] <= b_rrr)
	{
		while (ret[1] > 0)
		{
			rrr(a_arr, b_arr, data);
			ret[1]--;
			b_rrr--;
		}
		while (b_rrr > 0)
		{
			rrb(b_arr, data, 1);
			b_rrr--;
		}
	}
	else if (ret[1] > b_rrr)
		rotate_1_1(a_arr, b_arr, data, ret);
}

void	rotate_2(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret)
{
	int	b_rr;

	b_rr = b_arr[ret[2]].rr;
	while (ret[1] > 0)
	{
		rra(a_arr, data, 1);
		ret[1]--;
	}
	while (b_rr > 0)
	{
		rb(b_arr, data, 1 );
		b_rr--;
	}
}

void	rotate_3(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret)
{
	int	b_rrr;

	b_rrr = b_arr[ret[2]].rrr;
	while (ret[0] > 0)
	{
		ra(a_arr, data, 1);
		ret[0]--;
	}
	while (b_rrr > 0)
	{
		rrb(b_arr, data, 1);
		b_rrr--;
	}
}
