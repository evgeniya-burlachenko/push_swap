#include "push_swap.h"

void	push_to_b(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	int len;

	len = data->a_len - 1; // 
	while(data->a_len > 3) // 
	{
		if(a_arr[0].i == 0 || a_arr[0].i == len || a_arr[0].flag == 'm')
		//рассматриваем крайние числа - их всего 3:
		//если индекс = 0 или длине-1(последнему числу) или число в середине по значению
			ra(a_arr, data, 1);//1ый последним - перемещаем
		else
		{
			pb(a_arr, b_arr, data);// верхний эл-т  a в b
			if(b_arr[0].flag == 's')//если в начале стека
				rb(b_arr, data, 1);//в b  - 1ый последним
		}
	}
	if(!bubble_sorted(a_arr, 3))
		sort_three(a_arr, data);
}

void	count_steps(t_arr *a_arr, int len)
{

}

void	push_swap(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	int	*ret;
	int i;

	ret = malloc(4);
	push_to_b(a_arr, b_arr, data);
	while(data->b_len > 0)
	{
		count_steps(a_arr, data->a_len);
	}
}