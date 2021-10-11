/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:46:38 by skelly            #+#    #+#             */
/*   Updated: 2021/10/03 23:46:39 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*res;
	t_list	*tmp;

	res = 0;
	begin = lst;
	while (begin)
	{	
		tmp = ft_lstnew(f(begin->content));
		if (!tmp)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, tmp);
		begin = begin->next;
	}
	return (res);
}
