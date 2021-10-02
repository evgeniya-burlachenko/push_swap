/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:29:26 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/05 18:17:05 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			num;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	num = 0;
	while (num < n)
	{
		if (str1[num] != str2[num])
			return (str1[num] - str2[num]);
		num++;
	}
	return (0);
}
