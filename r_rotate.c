#include "push_swap.h"

//reverse rotate a - shift down all elements of stack a by 1.
// The last element becomes the first one.

void rra(t_arr *a_arr, t_data *data, int flag)
{
	int		i;
	t_arr	temp;

	temp = a_arr[data->a_len - 1]; // временная переменная равна последнему эл-ту
	i = data->a_len;
	while(i-- > 0)//пока счетчик > 0
	{
		a_arr[i - 1] = a_arr[i];//подвигаю массив
	}
	 a_arr[data->a_len - 1] = temp;//последнее число == 1му эл-ту
	 data->num++;
	 if (flag != 2 && data->print == 2)
	 	ft_putstr_fd("rra\n", 1);
}

void rrb(t_arr *b_arr, t_data *data, int flag)
{
	int		i;
	t_arr	temp;

	temp = b_arr[data->a_len - 1]; // временная переменная равна последнему эл-ту
	i = data->a_len;
	while(i-- > 0)//пока счетчик > 0
	{
		b_arr[i - 1] = b_arr[i];//подвигаю массив
	}
	 b_arr[data->b_len - 1] = temp;//последнее число == 1му эл-ту
	 data->num++;
	 if (flag != 2 && data->print == 2)
	 	ft_putstr_fd("rra\n", 1);
}

void	rrr(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	rra(a_arr, data, 2);
	rrb(b_arr, data, 2);
	data->num--;
	if (data->print == 2)
		ft_putstr_fd("rrr\n", 1);
}