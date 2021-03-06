/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:49:49 by skelly            #+#    #+#             */
/*   Updated: 2021/10/09 15:13:01 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_arr	*new_array(int len)
{
	t_arr	*arr;

	arr = malloc(len * sizeof(t_arr));
	return (arr);
}

void	check_argc_argv(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		exit (1);
	i = 2;
	while (i < argc)
	{
		if (!check_argv(argv[i]))
			exit (1);
		i++;
	}
}

int	check_argv(char *argv)
{
	int		i;

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

int	atoi_ps(const char *str)
{
	int				sign;
	unsigned long	num;

	sign = 1;
	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (*str != 0)
		error_exit();
	error_atoi(num, sign);
	return (sign * (int)num);
}

int	bubble_sorting(t_arr *arr, int len)
{
	if (len == 1 || len == 0)
		return (1);
	while ((len > 1))
	{
		if (arr[len - 2].value > arr[len - 1].value)
			return (0);
		len--;
	}
	return (1);
}
