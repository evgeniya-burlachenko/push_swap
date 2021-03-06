/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortedThree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:49:44 by skelly            #+#    #+#             */
/*   Updated: 2021/10/03 23:49:45 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorted_three(t_arr *a_arr, t_info *data)
{
	if (a_arr[0].i > a_arr[1].i && a_arr[0].i > a_arr[2].i)
	{
		if (a_arr[1].i > a_arr[2].i)
		{
			sa(a_arr, data, 1);
			rra(a_arr, data, 1);
		}
		else if (a_arr[1].i < a_arr[2].i)
			ra(a_arr, data, 1);
	}
	else if (a_arr[0].i > a_arr[1].i && a_arr[0].i < a_arr[2].i)
		sa(a_arr, data, 1);
	else if (a_arr[0].i < a_arr[1].i && a_arr[0].i < a_arr[2].i)
	{
		sa(a_arr, data, 1);
		ra(a_arr, data, 1);
	}
	else if (a_arr[0].i < a_arr[1].i && a_arr[0].i > a_arr[2].i)
		rra(a_arr, data, 1);
}

void	sorted_four(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if (a_arr[0].i < a_arr[1].i && a_arr[0].i < a_arr[2].i)
	{
		if (a_arr[0].i < a_arr[3].i)
			sorted_four_0(a_arr, b_arr, data);
		else if (a_arr[0].i > b_arr[3].i)
			sorted_four_3(a_arr, b_arr, data);
	}
	else if (a_arr[1].i < a_arr[0].i && a_arr[1].i < a_arr[3].i)
	{
		if (a_arr[1].i < a_arr[2].i)
			sorted_four_1(a_arr, b_arr, data);
		else if (a_arr[1].i > a_arr[2].i)
			sorted_four_2(a_arr, b_arr, data);
	}
	else
		sorted_fouretc(a_arr, b_arr, data);
}

void	sorted_fouretc(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if (a_arr[2].i < a_arr[0].i && a_arr[2].i < a_arr[3].i)
	{
		if (a_arr[2].i < a_arr[1].i)
			sorted_four_2(a_arr, b_arr, data);
		else if (a_arr[2].i > a_arr[1].i)
			sorted_four_1(a_arr, b_arr, data);
	}
	else if (a_arr[3].i < a_arr[1].i && a_arr[3].i < a_arr[2].i)
	{
		if (a_arr[3].i < a_arr[0].i)
			sorted_four_3(a_arr, b_arr, data);
		else if (a_arr[3].i > a_arr[0].i)
			sorted_four_0(a_arr, b_arr, data);
	}
}

void	sorted_five(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if (a_arr[0].i == 0)
	{
		pb(a_arr, b_arr, data);
		if (!bubble_sorting(a_arr, data->a_len))
			sorted_four(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}
	else if (a_arr[1].i == 0)
	{
		ra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if (!bubble_sorting(a_arr, data->a_len))
			sorted_four(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}
	else
		sorted_fiveetc(a_arr, b_arr, data);
}

void	sorted_fiveetc(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if (a_arr[2].i == 0)
	{
		ra(a_arr, data, 1);
		ra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if (!bubble_sorting(a_arr, data->a_len))
			sorted_four(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}
	else if (a_arr[3].i == 0)
	{
		rra(a_arr, data, 1);
		rra(a_arr, data, 1);
		pb(a_arr, b_arr, data);
		if (!bubble_sorting(a_arr, data->a_len))
			sorted_four(a_arr, b_arr, data);
		pa(a_arr, b_arr, data);
	}
	else
		sorted_fiveetc_2(a_arr, b_arr, data);
}

		// printf("a:%d\n", a_arr[0].value);
		// printf("b:%d\n", b_arr[0].value);
	// int i = 0;
		// while ( i < data->a_len)
		// {
		// printf("%d\n", a_arr[i].value );
		// 	i++;
		// }