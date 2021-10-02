#include "push_swap.h"

void	push_to_b(t_arr *a_arr, t_arr *b_arr, t_data *data)
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
			if (b_arr[0].flag == 's')
				rb(b_arr, data, 1);
		}
	}
	if (!check_if_sorted(a_arr, 3))
		three_elements(a_arr, data);
}

void	count_steps(t_arr *arr, int len)
{
	int	i;
	int	j;

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

void	rotate_stack(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret)
{
	if (ret[3] == 0)
		rotate_0(a_arr, b_arr, data, ret);
	else if (ret[3] == 1)
		rotate_1(a_arr, b_arr, data, ret);
	else if (ret[3] == 2)
		rotate_2(a_arr, b_arr, data, ret);
	else if (ret[3] == 3)
		rotate_3(a_arr, b_arr, data, ret);
}

void	order_stack(t_arr *a_arr, t_data *data, int i)
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

void	push_swap(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	int	*ret;
	int	i;

	ret = malloc(4);
	push_to_b(a_arr, b_arr, data);
	while (data->b_len > 0)
	{
		count_steps(a_arr, data->a_len);
		count_steps(b_arr, data->b_len);
		num_to_push(a_arr, b_arr, data, ret);
		rotate_stack(a_arr, b_arr, data, ret);
		pa(a_arr, b_arr, data);
	}
	i = 0;
	order_stack(a_arr, data, i);
}
