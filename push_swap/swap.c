#include "push_swap.h"

void	sa(t_arr *a_arr, t_info *data, int flag)
{
	t_arr	temp;

	if (a_arr)
	{
		temp = a_arr[0];
		a_arr[0] = a_arr[1];
		a_arr[1] = temp;
	}
	data->count++;
	if (data->print == 2 && flag != 2)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_arr *b_arr, t_info *data, int flag)
{
	t_arr	temp;

	if (b_arr)
	{
		temp = b_arr[0];
		b_arr[0] = b_arr[1];
		b_arr[1] = temp;
	}
	data->count++;
	if (data->print == 2 && flag != 2)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	sa(a_arr, data, 2);
	sb(b_arr, data, 2);
	data->count--;
	if (data->print == 2)
		ft_putstr_fd("ss\n", 1);
}
