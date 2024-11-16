/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:20:06 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:42:08 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_calloc function allocates memory for an array of nmemb elements,
	each of size size bytes. It then initializes the allocated memory to zero
	using the ft_bzero function.

	RETURN VALUE :
	It returns a pointer to the allocated memory, initialized to zero,
	or NULL in case of allocation error or overflow.

*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*to_return;
	size_t	bytes;

	bytes = nmemb * size;
	if (size != 0 && nmemb > (-1 / size))
		return (NULL);
	to_return = (void *)malloc(bytes);
	if (to_return == NULL)
		return (NULL);
	ft_bzero(to_return, bytes);
	return (to_return);
}
