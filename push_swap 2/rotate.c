#include "push_swap.h"

void	ra(t_arr *a_arr, t_data *data, int flag)
{
	int		i;
	t_arr	temp;

	temp = a_arr[0];
	i = 0;
	while (i++ <= data->a_len - 1)
	{
		a_arr[i - 1] = a_arr[i];
	}
	a_arr[data->a_len - 1] = temp;
	data->num++;
	if (flag != 2 && data->print == 2)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_arr *b_arr, t_data *data, int flag)
{
	int		i;
	t_arr	temp;

	temp = b_arr[0];
	i = 0;
	while (i++ <= data->b_len - 1)
	{
		b_arr[i - 1] = b_arr[i];
	}
	b_arr[data->b_len - 1] = temp;
	data->num++;
	if (flag != 2 && data->print == 2)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	ra(a_arr, data, 2);
	rb(b_arr, data, 2);
	data->num--;
	if (data->print == 2)
		ft_putstr_fd("rr\n", 1);
}
