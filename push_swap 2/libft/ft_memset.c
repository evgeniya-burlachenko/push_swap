/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:06:59 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/12 13:44:28 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*memptr;
	int		val;

	memptr = (char *)b;
	val = (char)c;
	while (len != 0)
	{
		*memptr = val;
		memptr++;
		len--;
	}
	return (b);
}
