/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:34:44 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:18:44 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

   DESCRIPTION :
	The ft_lstnew function creates a new list element. It allocates memory
	for a t_list structure, sets its content to the provided value,
	and initializes the next pointer to NULL.

	RETURN VALUE :
	It returns a pointer to the newly created list element,
	or NULL if the memory allocation fails.

*/

t_list	*ft_lstnew(void *content)
{
	t_list	*elm;

	elm = (t_list *)malloc(sizeof(t_list));
	if (!elm)
		return (NULL);
	elm->content = content;
	elm->next = NULL;
	return (elm);
}
