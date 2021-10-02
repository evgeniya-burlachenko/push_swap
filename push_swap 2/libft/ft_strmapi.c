/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:28:08 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/06 19:29:43 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cnt;
	char			*res;

	if (!s || !f)
		return (NULL);
	cnt = 0;
	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s, ft_strlen(s) + 1);
	while (res[cnt])
	{
		res[cnt] = (*f)(cnt, res[cnt]);
		cnt++;
	}
	return (res);
}
