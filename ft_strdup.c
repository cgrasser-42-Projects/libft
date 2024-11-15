/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:26:04 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:44:40 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strdup function creates a dynamic copy of the string s. It allocates
	enough memory to hold the string and a null-terminating character (\0),
	then copies the characters from s into the newly allocated memory.

	RETURN VALUE :
	It returns a pointer to the new duplicated string,
	or NULL if the allocation fails.

*/

char	*ft_strdup(const char *s)
{
	char	*to_return;
	size_t	size;

	size = ft_strlen(s);
	to_return = ft_calloc(size + 1, sizeof(char));
	if (!to_return)
		return (NULL);
	ft_memcpy(to_return, s, size);
	return (to_return);
}
