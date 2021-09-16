#include "push_swap.h"

int check_argv(char **argv)
{
	int i;
	i = 0;
	if(argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[1])
	{
		if(!ft_isdigit(argv[i]))
		{
			ft_putstr_fd("Error\n", 1);
			return(0);
		}
		i++;
	}
	return(1);
	
}

t_arr *new_array(int len)
{
	t_arr	*arr;

	arr = malloc(len*sizeof(t_arr));
	if(!arr)
		return(NULL);
	return(arr);

}

int atoi_push_swap(const char *str)
{
	int				sign;
	unsigned long	r;

	r = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
	{
		sign = -1;
	}
	if(*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if(r > LONG_MAX && (sign == 1))
			return(-1);
		if(r > LONG_MAX && (sign == -1))
			return(0);
		r = r * 10 + *str - '0';
		str++;
	}
	error_atoi(r, sign);
	return(sign *(int)r);

}

int bubble_sorted(t_arr *arr, int len)//стек a и длина его
{
	if(len == 1 || len == 0) // если 1 цифра или нет
	{
		return(1);
	}
	if(arr[len - 1].num < arr[len - 2].num)// последнее меньше прелылущего
		return(0);
	return(bubble_sorted(arr, len - 1));//и так пока не закончится len

}

void		all_free(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	free(a_arr);
	free(b_arr);
	free(data);
}