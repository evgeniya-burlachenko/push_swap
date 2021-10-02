#include "push_swap.h"

int	check_argv(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
		{
			ft_putstr_fd("Error\n", 1);
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_if_sorted(t_arr *arr, int len)
{
	if (len == 1 || len == 0)
	{
		return (1);
	}
	if (arr[len - 1].num < arr[len - 2].num)
		return (0);
	return (check_if_sorted(arr, len - 1));
}
// int check_if_sorted(t_arr *arr, int len)
// {
// 	if(len == 1 || len == 0 ) 
// 	{
// 		return(1);
// 	}
// 	while(len > 1)
// 	{
// 		if(arr[len - 2].num > arr[len - 1].num)
// 		{
// 			return(0);
			
			
// 		}
// 			len--;			
// 	}
// return(1); 
// }

int	check_limits(unsigned long num, int sign)
{
	if ((num > 2147483647 && sign == 1) || (num > 2147483648 && sign == -1))
	{
		ft_putstr_fd("Error\n", 1);
		exit(1);
	}
	return (0);
}

int	ps_atoi(const char  *str)
{
	int				sign;
	unsigned long	r;

	r = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
	}
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (r > LONG_MAX && (sign == 1))
			return (-1);
		if (r > LONG_MAX && (sign == -1))
			return (0);
		r = r * 10 + *str - '0';
		str++;
	}
	check_limits(r, sign);
	return (sign * (int)r);
}
