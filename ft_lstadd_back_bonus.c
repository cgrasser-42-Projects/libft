/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:40:08 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:25:57 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_lstadd_back function adds a new element new at the end of the linked
	list pointed to by lst. If the list is not empty, it finds the last element
	using ft_lstlast and updates its next pointer to point to new.
	If the list is empty, it sets lst to point to new.

	RETURN VALUE :
	This function does not return a value.

*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
