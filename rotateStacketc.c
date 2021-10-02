#include "push_swap.h"

void	rotate_2(t_arr *a_arr, t_arr *b_arr, t_info *data, int *num_finish)
{
	int b_rr;

	b_rr = b_arr[num_finish[2]].rr;
	while (num_finish[1] > 0)
	{
		rra(a_arr, data, 1);
		num_finish[1]--;
	}
	while (b_rr > 0)
	{
		rb(b_arr, data, 1);
		b_rr--;
	}
	
}

void	rotate_3(t_arr *a_arr, t_arr *b_arr, t_info *data, int *num_finish)
{
	int b_rrr;

	b_rrr = b_arr[num_finish[2]].rrr;
	while ( num_finish[0] > 0)
	{
		ra(a_arr, data, 1);
		num_finish[0]--;
	}
	while ( b_rrr > 0)
	{
		rrb(b_arr, data, 1);
		b_rrr--;
	}
	
	
}
void finishRotate(t_arr *a_arr, t_info *data, int i)
{
	int rr[2];

	while(a_arr[i].i != 0)
		i++;
	countSteps(a_arr, data->a_len);
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
