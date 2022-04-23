#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int uz;

	uz = 0;
	while(lst)
	{
		lst=lst->next;
		uz++;
	}
	return (uz);
}
