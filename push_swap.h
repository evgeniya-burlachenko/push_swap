#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_arr
{
	int 	value; 
	int		i;
	char	flag;
	char	min;

}				t_arr;

typedef	struct s_info
{
	int		a_len;
	int		b_len;
	int		count;
	int		print;
	t_arr	*a_arr;
}				t_info;

t_arr		*newArray(int len);
void 		checkArgcArgv(int argc, char **argv);
int			checkArgv(char *argv);
int 		atoiPs(const char *str);
int 		bubbleSorting(t_arr *arr, int len);

int 		errorExit(void);
void 		freeAll(t_arr *a_arr, t_arr *b_arr, t_info *data);
int 		errorAtoi(unsigned long num, int sign);

void 		ft_init(t_info *data, int len);
int 		indexMin(t_arr	*a, t_info *data, int flag, int i);
void		indexArray(t_arr *arr, t_info *data, int len);

void		sa(t_arr *a_arr, t_info *data, int flag);
void 		sb(t_arr *b_arr, t_info *data, int flag);
void		ss(t_arr *a_arr, t_arr *b_arr, t_info *data);

void		ra(t_arr *a_arr, t_info *data, int flag);
void		rb(t_arr *b_arr, t_info *data, int flag);
void		rr(t_arr *a_arr, t_arr *b_arr, t_info *data);

void		rra(t_arr *a_arr, t_info *data, int flag);
void		rrb(t_arr	*b_arr, t_info *data, int flag);
void		rrr(t_arr *a_arr, t_arr *b_arr, t_info *data);

void 		sortedThree(t_arr *a_arr, t_info *data);








#endif