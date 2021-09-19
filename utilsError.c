#include "push_swap.h"

int errorExit(void)
{
	ft_putstr_fd("Error\n", 1);
	exit (1);
}

void freeAll(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	free(a_arr);
	free(b_arr);
	free(data);
}

int errorAtoi(unsigned long num, int sign)
{
	if ((num > 2147483647 && sign == 1) || (num > 2147483648 && sign == -1))
	{
		ft_putstr_fd("Error\n", 1);
		exit(1);
	}
	return(0);
}