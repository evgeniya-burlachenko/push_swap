#include "push_swap.h"

int	find_min(t_arr *a, t_data *data, int fl, int i) 
{
	int					index;
	long long			tmp;
	static long long	dup;

	tmp = -2147483648;
	index = -2;
	// if (!dup)
	// 	dup = -4000000;
	while (++i < data->a_len)
	{
		if (a[i].i == -1 && (fl == 0 || a[i].num < tmp) && a[i].min != 'm')
		{
			fl = 1;
			tmp = a[i].num;
			index = i;
		}
	}
	if (a[index].num == dup)
		error_exit();
	dup = a[index].num;
	if (index == 0)
		return (-1);
	else if (index == -2)
		return (0);
	return (index);
}

void	ind_array(t_arr *arr, t_data *data, int len)
{
	int					location;
	int					i;

	data->a_len = len;
	data->b_len = 0;
	data->num = 0;
	data->print = 2;
	i = 0;
	location = find_min(arr, data, 0, -1);
	while (location)
	{
		if (location == -1)
			location = 0;
		arr[location].i = i++;
		arr[location].min = 'm';
		if (arr[location].i > data->a_len / 2)
			arr[location].flag = 'b';
		else if (arr[location].i < data->a_len / 2)
			arr[location].flag = 's';
		else if (arr[location].i == data->a_len / 2)
			arr[location].flag = 'm';
		location = find_min(arr, data, 0, -1);
	}
}
