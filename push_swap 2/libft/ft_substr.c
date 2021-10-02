/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:32:23 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/14 11:36:29 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	cnt;
	size_t	slen;

	cnt = 0;
	slen = ft_strlen(s);
	if (slen > start)
	{
		result = (char *)malloc(sizeof(char) * (len + 1));
		if (!result)
			return (NULL);
		while (cnt < len)
		{
			result[cnt] = s[start + cnt];
			cnt++;
		}
		result[cnt] = '\0';
		return (result);
	}
	result = (char *)malloc(sizeof(char) * 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}
