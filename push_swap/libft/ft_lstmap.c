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
