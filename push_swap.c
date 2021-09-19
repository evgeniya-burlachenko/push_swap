#include "push_swap.h"

void	pushTob(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	int	len;//len = argc -1

	len = data->a_len - 1;//
	while (data->a_len > 3)
	{
		if (a_arr[0].i == 0 || a_arr[0].i == len || a_arr[0].flag == 'm')
		//1ое число в стеке а имеет индекс 0|| последний или середина
		//повернуть a - сдвинуть вверх все элементы стека a на 1.
		// Первый элемент становится последним.
			ra(a_arr, data, 1);
		else//запушить в b и отсортировать-сверху f снизу s(убывание)
		{
			pb(a_arr, b_arr, data);
		//возьмите первый элемент в верхней части a 
		//и поместите его в верхнюю часть b.
			if(b_arr[0].flag == 's')
				rb(b_arr, data, 1);
		// сдвиньте все элементы стека b на 1. 
		//Первый элемент становится последним.
		}
	}
	if(!bubbleSorting(a_arr, 3))
	//в a останутся 3 эл-та 1ый медиана и последний - 
		sortedThree(a_arr, data);
}

void	push_swap(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	pushTob(a_arr, b_arr, data);




}