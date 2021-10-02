#include "push_swap.h"

void	rotate_0_1(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret)
{
	int	b_rr;

	b_rr = b_arr[ret[2]].rr;
	while (b_rr > 0)
	{
		rr(a_arr, b_arr, data);
		b_rr--;
		ret[0]--;
	}
	while (ret[0] > 0)
	{
		ra(a_arr, data, 1);
		ret[0]--;
	}
}

void	rotate_1_1(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret)
{
	int	b_rrr;

	b_rrr = b_arr[ret[2]].rrr;
	while (b_rrr > 0)
	{
		rrr(a_arr, b_arr, data);
		ret[1]--;
		b_rrr--;
	}
	while (ret[1] > 0)
	{
		rra(a_arr, data, 1);
		ret[1]--;
	}
}
