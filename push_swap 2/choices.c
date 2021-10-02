#include "push_swap.h"

void	three_elements(t_arr *a_arr, t_data *data)
{
	if (a_arr[0].num > a_arr[1].num && a_arr[0].num > a_arr[2].num)
	{
		if (a_arr[1].num > a_arr[2].num)
		{
			sa(a_arr, data, 1);
			rra(a_arr, data, 1);
		}
		else if (a_arr[1].num < a_arr[2].num)
			ra(a_arr, data, 1);
	}
	else if (a_arr[0].num > a_arr[1].num && a_arr[0].num < a_arr[2].num)
		sa(a_arr, data, 1);
	else if (a_arr[0].num < a_arr[1].num && a_arr[0].num < a_arr[2].num)
	{
		sa(a_arr, data, 1);
		ra(a_arr, data, 1);
	}
	else if (a_arr[0].num < a_arr[1].num && a_arr[0].num > a_arr[2].num)
		rra(a_arr, data, 1);
}

int	*find_placement(t_arr *arr, int num, int len)
{
	int	i;
	int	*ret;

	ret = malloc(2);
	i = 0;
	if (num < arr[0].num && num > arr[len - 1].num)
	{
		ret[0] = 0;
		ret[1] = 0;
		return (ret);
	}
	while (i < len)
	{
		if (num > arr[i].num && num < arr[i + 1].num)
		{
			i++;
			break ;
		}
		i++;
	}
	ret[0] = arr[i].rr;
	ret[1] = arr[i].rrr;
	return (ret);
}

int	new_max(int x, int y)
{
	int	max;

	max = 0;
	if (x >= y)
		max = x;
	else if (x < y)
		max = y;
	return (max);
}

void	calculate_steps(t_arr *b_arr, int *step, const int *rot, int i)
{
	step[0] = new_max(rot[0], b_arr[i].rr);
	step[1] = new_max(rot[1], b_arr[i].rrr);
	step[2] = rot[1] + b_arr[i].rr;
	step[3] = rot[0] + b_arr[i].rrr;
}

void	num_to_push(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret)
{
	int	i;
	int	j;
	int	value;
	int	step[4];
	int	*rot;

	i = -1;
	value = 2147483647;
	while (++i < data->b_len)
	{
		rot = find_placement(a_arr, b_arr[i].num, data->a_len);
		calculate_steps(b_arr, step, rot, i);
		j = -1;
		while (++j < 4)
		{
			if (step[j] < value)
			{
				value = step[j];
				ret[3] = j;
				ret[2] = i;
				ret[0] = rot[0];
				ret[1] = rot[1];
			}
		}
	}
}
