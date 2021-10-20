#include "libft.h"
void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*temp;

	if (lst == 0 || del == 0 || *lst == 0)
		return ;
	while (lst != 0 && *lst != 0)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
