#include "push_swap.h"

void ft_init(t_info *data, int len)
{
	data->a_len = len;
	data->b_len = 0;
	data->count = 0;
	data->print = 2;

}

int indexMin(t_arr	*a, t_info *data, int flag, int i)////fl = 0 & i = -1, ищу минимальное число a_arr data 0 -1
{
	//indexMin(arr, data, 0, -1);
	int			index;
	long long 	compare;
	static long	checkRepeat;

	compare = -2147483648;
	index = -2;
	if (!checkRepeat)
		checkRepeat = -4000000;
	while (++i < data->a_len)////0 ++ < a_len(argc -1)
	{
		if(a[i].i == -1 && (flag == 0 || a[i].value < compare))
		//a[0].0 == -1 a[0].value(2) < -214... 
		//a[1].1 == -1 a[1].value < compare
		//1)arr[i].i == -1 - по умолчанию flag =0 -  1ый проход. arr[i].value <compare - 2.3 etc && arr[i].min !='m'
		//2)arr[i].i == -1 flag ==1 arr[i].value > compare и т.д. пока не найдется минимальное число
		// 8 2 7
		{
			flag = 1;
			compare = a[i].value; //новое число 8 a[0]// 2 a[1]
			index = i; //индекс числа 0 , [1]
		}
	}
	
	if (a[index].value == checkRepeat) 
		errorExit();
	checkRepeat = a[index].value;//записываю минимальное число 2 (a[1])
	if (index == 0)
		return(-1);
	else if (index == -2)
		return(0);
	return (index);
}

void	indexArray(t_arr *arr, t_info *data, int len)
{
	int		index;
	int		i;

	i = 0;
	ft_init(data, len);
	index = indexMin(arr, data, 0, -1); // индекс == индекс мин значения
	while(index)
	{
		if(index == -1)//ввеедено внутрь цикла потому что 0 -false и цикл остановится
			index = 0;
		arr[index].i = i++; //0 etc порядковый индекс, начиная с минимального. к-рый должен быть после сортировки
		//arr[1].i = 0++;
		//arr[index].min = 'm';//arr
		//делими стек  а пополам
		if(arr[index].i > data->a_len / 2)
			arr[index].flag = 'f';
		else if(arr[index].i < data->a_len / 2)
			arr[index].flag = 's';
		else if(arr[index].i == data->a_len / 2)
			arr[index].flag = 'm';
		index = indexMin(arr, data, 0, -1);
// пока не пройдемся по всем индексам стека ища каждый раз минимальное число (исключая предыдущее) , расставляя им флаги
// и расставляя индексы в порядке возрастания от минимального к максимальному
	}
}