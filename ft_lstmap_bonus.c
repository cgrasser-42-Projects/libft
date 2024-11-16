/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 06:56:32 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:35:07 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_lstmap function creates a new linked list by applying the function f
	to each element's content in the list lst. It uses the function del to
	delete any content in case of errors during memory allocation or
	list creation. The new list is returned, with the contents transformed by f.

	RETURN VALUE :
	It returns a pointer to the newly created list, or NULL if there
	is an allocation failure.

*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*to_return;
	t_list	*node;
	void	*content;

	if (!lst || !f || ! del)
		return (NULL);
	to_return = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&to_return, del);
			return (NULL);
		}
		ft_lstadd_back(&to_return, node);
		lst = lst->next;
	}
	return (to_return);
}
