#include "push_swap.h"

int	*findPlace(t_arr *stack, int b, int len)
{
	int		i;
	int		*num_a;

	num_a = malloc(2);
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
			break;
		}
		i++; 
	}
	num_a[0] = stack[i].rr;
	num_a[1] = stack[i].rrr;
	return(num_a);
}

int maxSteps(int x, int y)
{
	int		max;

	max = 0;
	if (x >= y)
		max = x;
	else if (x < y)
		max = y;
	return (max);
}

void	calcSteps(t_arr *b_arr, int *step, const int *num_a, int i)
{
	step[0] = maxSteps(num_a[0], b_arr[i].rr);
	step[1] = maxSteps(num_a[1], b_arr[i].rrr);
	step[2] = num_a[1] + b_arr[i].rr;
	step[3] = num_a[0] +b_arr[i].rrr;
}

void	numToPush(t_arr *a_arr, t_arr *b_arr, t_info *data, int *num_finish)
{
	int		i;
	int		j;
	int		previous;
	int		steps[4];
	int		*num_a;

	i = -1;
	previous = 2147483647;
	while(++i < data->b_len)
	{
		num_a = findPlace(a_arr, b_arr[i].i, data->a_len);
		calcSteps(b_arr, steps, num_a, i);
		j = -1;
		while (++j < 4)
		{
			if (steps[j] < previous)
			{
				previous = steps[j];
				num_finish[3] = j;
				num_finish[2] = i;
				num_finish[0] = num_a[0];
				num_finish[1] = num_a[1];
				
			}
		}	
	}
}