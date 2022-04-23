#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *deger;

	deger = malloc(sizeof(t_list));
	if(!deger)
		return (0);
	deger -> content = content;
	deger -> next = NULL;
	return (deger);
}
