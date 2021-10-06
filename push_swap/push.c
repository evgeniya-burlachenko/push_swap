/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:49:24 by skelly            #+#    #+#             */
/*   Updated: 2021/10/05 23:30:45 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	int	i;

	i = data->a_len;
	while (i-- > 0)
		a_arr[i + 1] = a_arr[i];
	a_arr[0] = b_arr[0];
	i = 0;
	while (i++ <= data->b_len - 1)
		b_arr[i - 1] = b_arr[i];
	data->a_len++;
	data->b_len--;
	if (data->print == 2)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	int	i;

	i = data->b_len;
	while (i-- > 0)
		b_arr[i + 1] = b_arr[i];
	b_arr[0] = a_arr[0];
	i = 0;
	while (i++ <= data->a_len - 1)
		a_arr[i - 1] = a_arr[i];
	data->a_len--;
	data->b_len++;
	if (data->print == 2)
		ft_putstr_fd("pb\n", 1);
}
