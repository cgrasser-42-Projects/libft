/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 06:14:37 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:27:18 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_lstdelone function deletes a single element from the linked list.
	It takes the list element lst and a function pointer del that is used to
	delete the content of the element (if del is provided). After deleting
	the content, it frees the memory allocated for the element itself.

	RETURN VALUE :
	This function does not return a value.

*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
