#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <libft/libft.h>

typedef	struct s_arr
{
	int		num; //цифры
	int		i;//индекс числа в массиве
	int		flag;//флаги
	char	min;
	int		rr;
	int		rrr;
	
}					t_arr;

typedef	struct s_date
{
	int		a_len;
	int		b_len;
	int		num;//???
	int		print;//??
	t_arr	*a_arr;
}				t_data;

t_arr 		*new_array(int len);
int 		check_argv(char **argv);
int 		atoi_push_swap(const char *str);
int 		bubble_sorted(t_arr *arr, int len);
void 		index_array(t_arr *arr, t_data *data, int len);
int 		ind_min(t_arr *a, t_data *data, int fl, int i);

void 		error_utils(int argc, char **argv);
int 		error_atoi(unsigned long r, int sign);
int 		error_exit(void);

void		sa(t_arr *a_arr, t_data *data, int flag);
void		sb(t_arr *b_arr, t_data *data, int flag);
void		ss(t_arr *a_arr, t_arr *b_arr, t_data *data);

void 		ra(t_arr *a_arr, t_data *data, int flag);
void 		rb(t_arr *b_arr, t_data *data, int flag);
void		rr(t_arr *a_arr, t_arr *b_arr, t_data *data);

void 		rra(t_arr *a_arr, t_data *data, int flag);
void 		rrb(t_arr *b_arr, t_data *data, int flag);
void		rrr(t_arr *a_arr, t_arr *b_arr, t_data *data);

void		pb(t_arr *a_arr, t_arr *b_arr, t_data *data);
void		pa(t_arr *a_arr, t_arr *b_arr, t_data *data);

void 		sort_three(t_arr *a_arr, t_data *data);


#endif