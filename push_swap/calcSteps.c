#include "push_swap.h"

int	*find_place(t_arr *stack, int b, int len)
{
	int		i;
	int		*num_a;

	num_a = malloc(2 * sizeof(int));
	if (!num_a)
		return (0);
	i = 0;
	if (b < stack[0].i && b > stack[len - 1].i)
	{
		num_a[0] = 0;
		num_a[1] = 0;
		return (num_a);
	}
	while (i < len)
	{
		if (b > stack[i].i && b < stack[i + 1].i)
		{
			i++;
			break ;
		}
		i++;
	}
	num_a[0] = stack[i].rr;
	num_a[1] = stack[i].rrr;
	return (num_a);
}

int	max_steps(int x, int y)
{
	int		max;

	max = 0;
	if (x >= y)
		max = x;
	else if (x < y)
		max = y;
	return (max);
}

void	calc_steps(t_arr *b_arr, int *step, const int *num_a, int i)
{
	step[0] = max_steps(num_a[0], b_arr[i].rr);
	step[1] = max_steps(num_a[1], b_arr[i].rrr);
	step[2] = num_a[1] + b_arr[i].rr;
	step[3] = num_a[0] + b_arr[i].rrr;
}

void	num_to_push(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res)
{
	int		i;
	int		steps[4];
	int		*num_a;
	int		j;
	int		previous;

	i = -1;
	previous = 2147483647;
	while (++i < data->b_len)
	{
		num_a = find_place(a_arr, b_arr[i].i, data->a_len);
		calc_steps(b_arr, steps, num_a, i);
		j = -1;
		while (++j < 4)
		{
			if (steps[j] < previous)
			{
				previous = steps[j];
				finish_steps(res, num_a, i, j);
			}	
		}	
		 free(num_a);
	}
}

void	finish_steps(int *res, int *num_a, int i, int j)
{
	res[3] = j;
	res[2] = i;
	res[0] = num_a[0];
	res[1] = num_a[1];
}
