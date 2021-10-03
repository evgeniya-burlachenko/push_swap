#include "push_swap.h"

void	rra(t_arr *a_arr, t_info *data, int flag)
{
	int		i;
	t_arr	temp;

	temp = a_arr[data->a_len - 1];
	i = data->a_len;
	while (i-- > 0)
		a_arr[i + 1] = a_arr[i];
	a_arr[0] = temp;
	data->count++;
	if (flag != 2 && data->print == 2)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_arr	*b_arr, t_info *data, int flag)
{
	int		i;
	t_arr	temp;

	temp = b_arr[data->b_len - 1];
	i = data ->b_len;
	while ((i-- > 0))
		b_arr[i + 1] = b_arr[i];
	b_arr[0] = temp;
	data->count++;
	if (flag != 2 && data->print == 2)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	rra(a_arr, data, 2);
	rrb(b_arr, data, 2);
	data->count--;
	if (data->print == 2)
		ft_putstr_fd("rrr\n", 1);
}
