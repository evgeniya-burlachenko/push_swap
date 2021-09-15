#include "push_swap.h"

void error_utils(int argc, char **argv)
{
	int i;

	if(argc == 1)
		exit (1);
	i = 1;

	if(i < argc)
	{
		if(!check_argv(argv[i]))
			exit (1);

	}
}

int error_atoi(unsigned long r, int sign)
{
	if((r > 2147483647 && sign == 1) || (r > 2147483647 && sign == -1))
	{
		ft_putstr_fd("Error\n", 1);
		exit(1);
	}
}

int error_exit(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}