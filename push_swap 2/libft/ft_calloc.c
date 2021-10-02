/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:43:16 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/05 16:47:50 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		space;
	void	*memory;

	space = count * size;
	memory = malloc(space);
	if (memory != 0)
		ft_bzero(memory, space);
	return (memory);
}
