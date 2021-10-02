/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:19:58 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/09 14:21:52 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	symbol;

	str = (char *)s;
	symbol = (char)c;
	while ((*str != '\0') && (*str != symbol))
		str++;
	if (*str == c)
		return (str);
	else
		return (NULL);
}
