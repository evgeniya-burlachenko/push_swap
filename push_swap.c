#include "push_swap.h"

void	pushTob(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	int	len;

	len = data->a_len - 1;
	while (data->a_len > 3)
	{
		if (a_arr[0].i == 0 || a_arr[0].i == len || a_arr[0].flag == 'm')
	
			ra(a_arr, data, 1);
		else
		{
			pb(a_arr, b_arr, data);
			if(b_arr[0].flag == 's')
				rb(b_arr, data, 1);
		}
	}
	if(!bubbleSorting(a_arr, 3))
		sortedThree(a_arr, data);
}

void	countSteps(t_arr *arr, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		arr[i].rr = i;
		i++;
	}
	i = len - 1;
	arr[0].rrr = 0;
	j = 1;
	while (i > 0)
	{
		arr[j].rrr = i;
		i--;
		j++;
	}
}

void rotateStack(t_arr *a_arr, t_arr *b_arr, t_info *data, int *num_finish)
{
	if(num_finish[3] == 0)
		rotate_0(a_arr, b_arr, data, num_finish);
	else if (num_finish[3] == 1)
		rotate_1(a_arr, b_arr, data, num_finish);
	else if (num_finish[3] == 2)
		rotate_2(a_arr, b_arr, data, num_finish);
	else if (num_finish[3] == 3)
		rotate_3(a_arr, b_arr, data, num_finish);
}

void	push_swap(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	int	*num_finish;
	int	i;
	
	num_finish = malloc(4);
	pushTob(a_arr, b_arr, data);
	while(data->b_len > 0)
	{
		countSteps(a_arr, data->a_len);
		countSteps(b_arr, data->b_len);
		numToPush(a_arr, b_arr, data, num_finish);
		rotateStack(a_arr, b_arr, data, num_finish);
		free(num_finish);
		pa(a_arr, b_arr, data);
		
	}
	i = 0;
	finishRotate(a_arr, data, i);
	//free(num_finish);
	
}