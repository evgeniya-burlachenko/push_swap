#include "push_swap.h"

int ind_min(t_arr *arr, t_data *data, int fl, int i)////fl = 0 & i = -1, ищу минимальное число a_arr data 0 -1
{
	int 				index;
	long long 			tmp;
	static long long	dup; //появится позже

	tmp = -2147483648;
	index = -2;
	if(!dup)
		dup = -4000000; //??????
	while (++i < data->a_len) //0 ++ < a_len(argc -1)
	{
		if (arr[i].i == -1 && (fl == 0 || arr[i].num < tmp) && arr[i].min != 'm')
		//1)arr[i].i == -1 - по умолчанию fl =0 arr[i].num !<tmp arr[i].min !='m'
		//2)arr[i].i == -1 fl ==1 arr[i].num > tmp и т.д. пока не найдется минимальное число

		{
			fl = 1;
			tmp = arr[i].num; //tmp = новое число
			index = i;//индекс числа

		}
	}
	if(arr[index].num == dup)//если есть повтор 
		error_exit();
	dup = arr[index].num;//записываю минимальное число в dup
	if (index == 0)
		return (-1);// 
	else if (index == -2)
		return(0);
	return(index);
	
}

void index_array(t_arr *arr, t_data *data, int len)
{
	int index;
	int i;

	//инициализирую структру data
	data->a_len = len; //длина стека a (argc - 1)
	data->b_len = 0; //стек b пустой
	data->num = 0;
	data->print = 2;//используется в инструкциях
	i = 0;
	index = ind_min(arr, data, 0, -1);// индекс == индекс мин значения
	while(index)//пока существует 
	{
		if(index == -1)//ввеедено внуть цикла потому что 0 -false и цикл остановится
			index == 0;
		arr[index].i = i++;
		arr[index].min = 'm';
		//делими стек  а пополам
		if (arr[index].i > data->a_len / 2)//если индекс во 2 ой части стека
			arr[index].flag = 'f'; // ставим флаг  b
		else if(arr[index].i < data->a_len / 2) //если число в 1 части стека а
			arr[index].flag = 's';//ставим флаг s
		else if (arr[index].i == data->a_len / 2)//если в середине 
			arr[index].flag = 'm';//флаг  m
		index = ind_min(arr, data, 0, -1);// пока не пройдемся по всем индексам стека ища минимальное число и расставляя им флаги
		
	}


}