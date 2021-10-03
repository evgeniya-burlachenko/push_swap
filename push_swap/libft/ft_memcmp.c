/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:48:30 by skelly            #+#    #+#             */
/*   Updated: 2021/10/03 23:48:31 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_1;
	unsigned char	*s2_2;

	s1_1 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_1++ != *s2_2++)
			return (*(s1_1 - 1) - *(s2_2 - 1));
	}
	return (0);
}
