/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:49:14 by skelly            #+#    #+#             */
/*   Updated: 2021/10/05 20:25:17 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	int	len;

	len = data->a_len - 1;
	while (data->a_len > 3)
	{
		if (a_arr[0].i == 0 || a_arr[0].i == len || a_arr[0].flag == 'm')
			ra(a_arr, data, 1);
		else
		{
			pb(a_arr, b_arr, data);
			if (b_arr[0].flag == 's')
				rb(b_arr, data, 1);
		}
	}
	if (!bubble_sorting(a_arr, 3))
		sorted_three(a_arr, data);
}

void	count_steps(t_arr *arr, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		arr[i].rr = i;
		i++;
	}
	i = len - 1;
	arr[0].rrr = 0;
	j = 1;
	while (i > 0)
	{
		arr[j].rrr = i;
		i--;
		j++;
	}
}

void	rotate_a_b(t_arr *a_arr, t_arr *b_arr, t_info *data, int *res)
{
	if (res[3] == 0)
		rotate_0(a_arr, b_arr, data, res);
	else if (res[3] == 1)
		rotate_1(a_arr, b_arr, data, res);
	else if (res[3] == 2)
		rotate_2(a_arr, b_arr, data, res);
	else if (res[3] == 3)
		rotate_3(a_arr, b_arr, data, res);
}

void	push_swap(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	int	*num_finish;
	int	i;

	num_finish = malloc(4 * sizeof(int));
	push_to_b(a_arr, b_arr, data);
	while (data->b_len > 0)
	{
		count_steps(a_arr, data->a_len);
		count_steps(b_arr, data->b_len);
		num_to_push(a_arr, b_arr, data, num_finish);
		rotate_a_b(a_arr, b_arr, data, num_finish);
		pa(a_arr, b_arr, data);
	}
	free(num_finish);
	i = 0;
	finish_rotate(a_arr, data, i);
}
