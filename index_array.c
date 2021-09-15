#include "push_swap.h"

int ind_min(t_arr *a, t_data *data, int fl, int i)////fl = 0 & i = -1, ищу минимальное число a_arr data 0 -1
{
	int 				index;
	long long 			tmp;
	static long long	dup;

	tmp = -2147483648;
	index = -2;
	if(!dup)
		dup = -4000000;
	while (++i < data->a_len) //1 ++ < a_len(argc -1)
	{
		if (a[i].i == -1 && (fl == 0 || a[i].num < tmp) && a[i].min != 'm')
		{
			fl = 1;
			tmp = a[i].num;
			index = i;

		}
	}
	if(a[index].num == dup)
		error_exit();
	dup = a[index].num;
	if (index == 0)
		return (-1);// не найдейн
	else if (index == -2)
		return(0);
	return(index);
	
}

void index_array(t_arr *arr, t_data *data, int len)
{
	int loc;
	int i;

	//инициализирую структру data
	data->a_len = len; //длина стека a
	data->b_len = 0; //стек b пустой
	data->num = 0;
	data->print = 2;
	i = 0;
	index = ind_min(arr, data, 0, -1);// индекс == индекс мин значения
	while(index)
	{
		if(index == -1)
			index == 0;
		arr[index].i = i++;
		arr[index].min = 'm';
		//делими стек  а пополам
		if (arr[index].i > data->a_len / 2)//если индекс во 2 ой части стека
			arr[index].flag = 'b'; // ставим флаг  b
		else if(arr[index].i < data->a_len / 2) //если число в 1 части стека а
			arr[index].flag = 's';//ставим флаг s
		else if (arr[index].i == data->a_len / 2)//если в середине 
			arr[index].flag = 'm';//флаг  m
		index = ind_min(arr, data, 0, -1);// пока не пройдемся по всем индексам стека
		
	}


}