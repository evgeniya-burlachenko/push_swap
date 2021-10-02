#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_arr
{
	int		num;
	int		i;
	char	flag;
	char	min;
	int		rr;
	int		rrr;
}				t_arr;

typedef struct s_data
{
	int		a_len;
	int		b_len;
	int		num;
	int		print;
	t_arr	*a_arr;
}				t_data;

t_arr	*new_array(int len);
void	ind_array(t_arr *arr, t_data *data, int len);
int		check_argv(char *argv);
int		check_if_sorted(t_arr *arr, int len);
int		ps_atoi(const char *str);
void	sa(t_arr *a_arr, t_data *data, int flag);
void	sb(t_arr *b_arr, t_data *data, int flag);
void	ss(t_arr *a_arr, t_arr *b_arr, t_data *data);
void	pb(t_arr *a_arr, t_arr *b_arr, t_data *data);
void	pa(t_arr *a_arr, t_arr *b_arr, t_data *data);
void	rra(t_arr *a_arr, t_data *data, int flag);
void	rrb(t_arr *b_arr, t_data *data, int flag);
void	rrr(t_arr *a_arr, t_arr *b_arr, t_data *data);
void	ra(t_arr *a_arr, t_data *data, int flag);
void	rb(t_arr *b_arr, t_data *data, int flag);
void	rr(t_arr *a_arr, t_arr *b_arr, t_data *data);
void	three_elements(t_arr *a_arr, t_data *data);
void	push_swap(t_arr *a_arr, t_arr *b_arr, t_data *data);
void	num_to_push(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret);
void	rotate_0(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret);
void	rotate_0_1(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret);
void	rotate_1(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret);
void	rotate_1_1(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret);
void	rotate_2(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret);
void	rotate_3(t_arr *a_arr, t_arr *b_arr, t_data *data, int *ret);
int		error_exit(void);
void	error_management(int argc, char **argv);
void	free_all(t_arr *a_arr, t_arr *b_arr, t_data *data);

#endif