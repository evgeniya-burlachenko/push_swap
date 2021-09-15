#include "push_swap.h"

//: rotate a - shift up all elements of stack a by 1. 
//The first element becomes the last one.

void ra(t_arr *a_arr, t_data *data, int flag)
{
	int		i;
	t_arr	temp;

	temp = a_arr[0]; // временная переменная равна 1му эл-ту
	i = 0;
	while(i++ <= data->a_len - 1)//пока счетчик меньше послелнего эл-та в стеке a
	{
		a_arr[i - 1] = a_arr[i];//подвигаю массив
	}
	 a_arr[data->a_len - 1] = temp;//последнее число == 1му эл-ту
	 data->num++;
	 if (flag != 2 && data->print == 2)
	 	ft_putstr_fd("ra\n", 1);
}

void rb(t_arr *b_arr, t_data *data, int flag)
{
	int		i;
	t_arr	temp;

	temp = b_arr[0]; // временная переменная равна 1му эл-ту
	i = 0;
	while(i++ <= data->b_len - 1)//пока счетчик меньше послелнего эл-та в стеке a
	{
		b_arr[i - 1] = b_arr[i];//подвигаю массив
	}
	 b_arr[data->b_len - 1] = temp;//последнее число == 1му эл-ту
	 data->num++;
	 if (flag != 2 && data->print == 2)
	 	ft_putstr_fd("ra\n", 1);
}

void	rr(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	ra(a_arr, data, 2);
	rb(b_arr, data, 2);
	data->num--;
	if(data->print == 2)
		ft_putstr_fd("rr\n",1);
}