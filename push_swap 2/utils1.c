#include "push_swap.h"

t_arr	*new_array(int len)
{
	t_arr	*arr;

	arr = malloc(len * sizeof(t_arr));
	if (!arr)
		return (NULL);
	return (arr);
}

void	error_management(int argc, char **argv)
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

int	error_exit(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

void	free_all(t_arr *a_arr, t_arr *b_arr, t_data *data)
{
	free(a_arr);
	free(b_arr);
	free(data);
}
