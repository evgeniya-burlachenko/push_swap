#include "push_swap.h"

void	pb(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	int	i;

	i = data->b_len;
	while (i-- > 0)
	{
		b_arr[i + 1] = b_arr[i];
	}
	b_arr[0] = a_arr[0];
	i = 0;
	while (i++ <= data->a_len - 1)
	{
		a_arr[i - 1] = a_arr[i];
	}
	data->a_len--;
	data->b_len++;
	data->num++;
	if (data->print == 2)
		ft_putstr_fd("pb\n", 1);
}

void	pa(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	int	i;

	i = data->a_len;
	while (i-- > 0)
	{
		a_arr[i + 1] = a_arr[i];
	}
	a_arr[0] = b_arr[0];
	i = 0;
	while (i++ <= data->b_len - 1)
	{
		b_arr[i - 1] = b_arr[i];
	}
	data->a_len++;
	data->b_len--;
	data->num++;
	if (data->print == 2)
		ft_putstr_fd("pa\n", 1);
}
