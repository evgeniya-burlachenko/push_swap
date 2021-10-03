#include "push_swap.h"

int	error_exit(void)
{
	ft_putstr_fd("Error\n", 1);
	exit (1);
}

void	free_all(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	free(a_arr);
	free(b_arr);
	free(data);
}

int	error_atoi(unsigned long num, int sign)
{
	if ((num > 2147483647 && sign == 1) || (num > 2147483648 && sign == -1))
	{
		ft_putstr_fd("Error\n", 1);
		exit(1);
	}
	return (0);
}
