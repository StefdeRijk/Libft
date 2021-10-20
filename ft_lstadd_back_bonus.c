#include "libft.h"
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst != 0 || new != 0)
	{
		if (*lst != 0)
		{
			last = ft_lstlast(*lst);
			last->next = new;
			new->next = 0;
		}
		else
			*lst = new;
	}
}
