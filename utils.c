#include "push_swap.h"

t_arr	*newArray(int len)
{
	t_arr	*arr;

	arr = malloc(len * sizeof(t_arr));
	if(!arr)
		return(0);
	return(arr);

}

void checkArgcArgv(int argc, char **argv)
{
	int i;

	if(argc == 1)
		exit (1);
	i = 2;
	while(i < argc)
	{
		if(!checkArgv(argv[i]))
			exit (1);
		i++;
	}
}

int	checkArgv(char *argv)
{
	int		i;

	i = 0;
	if(argv[i] == '-' || argv[i] == '+')
		i++;
	while(argv[i])
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

int atoiPs(const char *str)
{
	int				sign;
	unsigned long 	num;

	sign = 1;
	num = 0;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '+' || *str == '-')
		str++;
	while(ft_isdigit(*str))
	{
		if (num > LONG_MAX && (sign == 1))
			return(-1);
		if (num > LONG_MAX && (sign == -1))
			return(0);
		num = num * 10 + *str - '0';
		str++;
	}
	errorAtoi(num, sign);
	return(sign * (int)num);
	
}

int bubbleSorting(t_arr *arr, int len)
{
	if(len == 1 || len == 0)
		return(1);
	while ((len > 1))
	{
		if(arr[len - 2].value > arr[len - 1].value)
			return(0);
		len--;	
	}
	return(1);	
}