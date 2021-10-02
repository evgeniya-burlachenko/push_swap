#include "push_swap.h"

void sortedThree(t_arr *a_arr, t_info *data)
{
	if(a_arr[0].i > a_arr[1].i&& a_arr[0].i> a_arr[2].i)
	{
		if (a_arr[1].i > a_arr[2].i)
		{
			sa(a_arr, data, 1);
			rra(a_arr, data, 1);
		}
		else if (a_arr[1].i < a_arr[2].i)
			ra(a_arr, data, 1);
	}
	else if (a_arr[0].i > a_arr[1].i && a_arr[0].i < a_arr[2].i)
		sa(a_arr, data, 1);
	else if(a_arr[0].i < a_arr[1].i && a_arr[0].i < a_arr[2].i)
	{
		sa(a_arr, data, 1);
		ra(a_arr, data, 1);
	
 }
	else if (a_arr[0].i < a_arr[1].i &&a_arr[0].i > a_arr[2].i)
		rra(a_arr, data, 1);
}

void sortedFour(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if(a_arr[0].i < a_arr[1].i &&  a_arr[0].i < a_arr[2].i && a_arr[0].i < a_arr[3].i)
	{
			pb(a_arr, b_arr, data);
			if(!bubbleSorting(a_arr, data->a_len))
				sortedThree(a_arr, data);
			pa(a_arr, b_arr, data);
	}

	else if(a_arr[1].i < a_arr[0].i && a_arr[1].i < a_arr[3].i && a_arr[1].i < a_arr[2].i)
	{
			ra(a_arr, data, 1);
			pb(a_arr, b_arr, data);
			if(!bubbleSorting(a_arr, data->a_len))
				sortedThree(a_arr, data);
			pa(a_arr, b_arr, data);
	}
	else if(a_arr[2].i < a_arr[0].i && a_arr[2].i < a_arr[3].i && a_arr[2].i < a_arr[1].i)	
		{
			ra(a_arr, data, 1);
			ra(a_arr, data, 1);
			pb(a_arr, b_arr, data);
			if(!bubbleSorting(a_arr, data->a_len))
				sortedThree(a_arr, data);
			pa(a_arr, b_arr, data);
		}
	else if(a_arr[3].i < a_arr[1].i && a_arr[3].i< a_arr[2].i && a_arr[3].i < a_arr[0].i)
	{
		rra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if(!bubbleSorting(a_arr, data->a_len))
			sortedThree(a_arr, data);
		pa(a_arr, b_arr, data);
	}
}
	
void sortedFive(t_arr *a_arr,t_arr *b_arr, t_info *data)
{
	if(a_arr[0].i == 0)
	{
		pb(a_arr, b_arr, data);
		if(!bubbleSorting(a_arr, data->a_len))
			sortedFour(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}

	else if(a_arr[1].i == 0)
	{
		ra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if(!bubbleSorting(a_arr, data->a_len))
			sortedFour(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}
	else if(a_arr[2].i == 0)
	{
		ra(a_arr, data, 1);
		ra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if(!bubbleSorting(a_arr, data->a_len))
			sortedFour(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}

	else if(a_arr[3].i == 0)
	{
		rra(a_arr, data, 1);
		rra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if(!bubbleSorting(a_arr, data->a_len))
			sortedFour(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}

	else if(a_arr[4].i == 0)
	{
		rra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if(!bubbleSorting(a_arr, data->a_len))
			sortedFour(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	
	}
}
		// printf("a:%d\n", a_arr[0].value);
		// printf("b:%d\n", b_arr[0].value);
	// int i = 0;
		// while ( i < data->a_len)
		// {
		// printf("%d\n", a_arr[i].value );
		// 	i++;
		// }
