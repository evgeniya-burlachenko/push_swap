#include "push_swap.h"

void sortedThree(t_arr *a_arr, t_info *data)
{
	if(a_arr[0].value > a_arr[1].value && a_arr[0].value > a_arr[2].value)
	{
		if (a_arr[1].value > a_arr[2].value)
		{
			sa(a_arr, data, 1);
			rra(a_arr, data, 1);
		}
		else if (a_arr[1].value < a_arr[2].value)
			ra(a_arr, data, 1);
	}
	else if (a_arr[0].value > a_arr[1].value && a_arr[0].value < a_arr[2].value)
		sa(a_arr, data, 1);
	else if(a_arr[0].value < a_arr[1].value && a_arr[0].value < a_arr[2].value)
	{
		sa(a_arr, data, 1);
		ra(a_arr, data, 1);
	}
	else if (a_arr[0].value < a_arr[1].value &&a_arr[0].value > a_arr[2].value)
		rra(a_arr, data, 1);
}