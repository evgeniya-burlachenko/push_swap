/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:34:24 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/10 11:00:56 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
		if (str1[num] == '\0' || str2[num] == '\0')
			return (str1[num - 1] - str2[num - 1]);
		num++;
	}
	return (0);
}
