#include "push_swap.h"

void rotate_0(t_arr *a_arr, t_arr *b_arr, t_info *data, int *num_finish)
{
	int		b_rr;

	b_rr = b_arr[num_finish[2]].rr; //b_arr[i].rr
	if(num_finish[0] <= b_rr)
	{
		while(num_finish[0] > 0)
		{
			rr(a_arr, b_arr, data);
			num_finish[0]--;
			b_rr--;
		}
		while(b_rr > 0)
		{
			rb(b_arr, data, 1);
			b_rr--;
		}
	}
	else if (num_finish[0] > b_rr)
		rotate_0_else(a_arr, b_arr, data, num_finish);

}

void rotate_0_else(t_arr *a_arr, t_arr *b_arr, t_info *data, int *num_finish)
{
	int b_rr;

	b_rr = b_arr[num_finish[2]].rr;
	while (b_rr > 0)
	{
		rr(a_arr, b_arr, data);
		b_rr--;
		num_finish[0]--;
	}
	while (num_finish[0] > 0)
	{
		ra(a_arr, data, 1);
		num_finish[0]--;
	}
}

void rotate_1(t_arr *a_arr, t_arr *b_arr, t_info *data, int *num_finish)
{
	int b_rrr;

	b_rrr = b_arr[num_finish[2]].rrr;//b_arr[i].rrr
	if (num_finish[1] <= b_rrr) //a_arr.rrr <= 
	{
		while (num_finish[1] > 0)
		{
			rrr(a_arr, b_arr, data);
			num_finish[1]--;
			b_rrr--;
		}
		while (b_rrr > 0)
		{
			rrb(b_arr, data, 1);
			b_rrr--;
		}
	}
	else if (num_finish[1] > b_rrr)
		rotate_1_else(a_arr, b_arr, data, num_finish);
}

void rotate_1_else(t_arr *a_arr, t_arr *b_arr, t_info *data, int *num_finish)
{
	int b_rrr;

	b_rrr = b_arr[num_finish[2]].rrr;
	while (b_rrr > 0)
	{
		rrr(a_arr, b_arr, data);
		num_finish[1]--;
		b_rrr--;
	}
	while(num_finish[1] > 0)
	{
		rra(a_arr, data, 1);
		num_finish[1]--;
	}
}