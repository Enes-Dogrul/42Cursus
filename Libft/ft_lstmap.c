#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *yeni;

	if (!lst || !f)
		return (NULL);
	yeni = ft_lstnew(f(lst -> content));
	if (!yeni)
	{
		ft_lstclear(&yeni,del);
		return (NULL);
	}
	yeni -> next = ft_lstmap(lst -> next,f,del);
	return (yeni);
}
