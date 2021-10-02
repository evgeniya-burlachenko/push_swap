/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:43:37 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/05 18:05:46 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	symbol;

	str = (char *)s + ft_strlen(s) + 1;
	symbol = (char)c;
	while (s < str)
	{
		str--;
		if (*str == symbol)
			return (str);
	}
	return (NULL);
}
