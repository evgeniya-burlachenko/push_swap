/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:54:58 by skelly            #+#    #+#             */
/*   Updated: 2021/10/04 09:54:59 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_arr
{
	int			value;
	int			i;
	char		flag;
	int			rr;
	int			rrr;	
}t_arr;

typedef struct s_info
{
	int			a_len;
	int			b_len;
	int			count;
	int			print;
	t_arr		*a_arr;
}t_info;

t_arr			*new_array(int len);
void			check_argc_argv(int argc, char **argv);
int				check_argv(char *argv);
int				atoi_ps(const char *str);
int				bubble_sorting(t_arr *arr, int len);

int				error_exit(void);
void			free_all(t_arr *a_arr, t_arr *b_arr, t_info *data);
int				error_atoi(unsigned long num, int sign);

void			ft_init(t_info *data, int len);
int				index_min(t_arr	*a, t_info *data, int flag, int i);
void			index_array(t_arr *arr, t_info *data, int len);

void			sa(t_arr *a_arr, t_info *data, int flag);
void			sb(t_arr *b_arr, t_info *data, int flag);
void			ss(t_arr *a_arr, t_arr *b_arr, t_info *data);

void			ra(t_arr *a_arr, t_info *data, int flag);
void			rb(t_arr *b_arr, t_info *data, int flag);
void			rr(t_arr *a_arr, t_arr *b_arr, t_info *data);

void			rra(t_arr *a_arr, t_info *data, int flag);
void			rrb(t_arr	*b_arr, t_info *data, int flag);
void			rrr(t_arr *a_arr, t_arr *b_arr, t_info *data);

void			pa(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			pb(t_arr *a_arr, t_arr *b_arr, t_info *data);

void			sorted_three(t_arr *a_arr, t_info *data);
void			sorted_four(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			sorted_fouretc(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			sorted_four_0(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			sorted_four_1(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			sorted_four_2(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			sorted_four_3(t_arr *a_arr, t_arr *b_arr, t_info *data);

void			sorted_five(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			sorted_fiveetc(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			sorted_fiveetc_2(t_arr *a_arr, t_arr *b_arr, t_info *data);

void			push_to_b(t_arr *a_arr, t_arr *b_arr, t_info *data);
void			count_steps(t_arr *arr, int len);
void			rotate_a_b(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res);
void			push_swap(t_arr *a_arr, t_arr *b_arr, t_info *data);

int				*find_place(t_arr *a, int b, int len);
int				max_steps(int x, int y);
void			calc_steps(t_arr *b_arr, int *step, const int *rot, int i);
void			num_to_push(t_arr *a_arr, t_arr *b_arr, t_info *data, int *ret);
void			finish_steps(int *res, int *num_a, int i, int j);

void			rotate_0(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res);
void			rotate_0_1(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res);
void			rotate_1(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res);
void			rotate_1_1(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res);

void			rotate_2(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res);
void			rotate_3(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res);
void			finish_rotate(t_arr *a_arr, t_info *data, int i);

#endif