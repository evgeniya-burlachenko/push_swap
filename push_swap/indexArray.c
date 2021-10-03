#include "push_swap.h"

void	ft_init(t_info *data, int len)
{
	data->a_len = len;
	data->b_len = 0;
	data->count = 0;
	data->print = 2;
}

int	index_min(t_arr	*a, t_info *data, int flag, int i)
{
	int			index;
	long long	compare;
	static long	check_repeat;

	compare = -2147483648;
	index = -2;
	if (!check_repeat)
		check_repeat = 0;
	while (++i < data->a_len)
	{
		if (a[i].i == -1 && (flag == 0 || a[i].value < compare))
		{
			flag = 1;
			compare = a[i].value;
			index = i;
		}
	}
	check_repeat = a[index].value;
	if (index == 0)
		return (-1);
	else if (index == -2)
		return (0);
	return (index);
}

void	index_array(t_arr *arr, t_info *data, int len)
{
	int		index;
	int		i;

	i = 0;
	ft_init(data, len);
	index = index_min(arr, data, 0, -1);
	while (index)
	{
		if (index == -1)
			index = 0;
		arr[index].i = i++;
		if (arr[index].i > data->a_len / 2)
			arr[index].flag = 'f';
		else if (arr[index].i < data->a_len / 2)
			arr[index].flag = 's';
		else if (arr[index].i == data->a_len / 2)
			arr[index].flag = 'm';
		index = index_min(arr, data, 0, -1);
	}
}
