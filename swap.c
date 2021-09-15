#include "push_swap.h"
//swap a - swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements).
void	sa(t_arr *a_arr, t_data *data, int flag)//a_arr, data, 1
{
	t_arr	temp;

	if(a_arr)
	{
		temp = a_arr[0];
		a_arr[0] = a_arr[1];
		a_arr[1] = temp;
	}
	data->num++;//шаг вперед
	if(data->print == 2 && flag != 2) //  если флаг = 2 - это ss
		ft_putstr_fd("sa\n", 1);

}
//swap b - swap the first 2 elements at the top of stack b. 
//Do nothing if there is only one or no elements).
void	sb(t_arr *b_arr, t_data *data, int flag)//a_arr, data, 1
{
	t_arr	temp;

	if(b_arr)
	{
		temp = b_arr[0];
		b_arr[0] = b_arr[1];
		b_arr[1] = temp;
	}
	data->num++;//???
	if(data->print == 2 && flag != 2)////  если флаг = 2 - это ss
		ft_putstr_fd("sa\n", 1);

}

//sa and sb at the same time.

void	ss(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	sa(a_arr, data, 2);
	sb(b_arr, data, 2);
	data->num--;// убрать лишний шаг
	if(data->print == 2)//??
		ft_putstr_fd("ss\n", 1);

}