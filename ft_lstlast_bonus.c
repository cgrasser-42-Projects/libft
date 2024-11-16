/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:23:50 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:23:53 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_lstlast function returns the last element of the linked list pointed
	to by lst. It iterates through the list until it reaches
	the last element (where next is NULL).

	RETURN VALUE :
	It returns a pointer to the last element of the list,
	or NULL if the list is empty.

*/

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
