/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:59:43 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:36:45 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strnstr function searches for the first occurrence of the string
	little within the first len characters of the string big. If little is
	an empty string, the function directly returns the pointer to big.
	It searches character by character and stops when a match is found.

	RETURN VALUE :
	It returns a pointer to the first occurrence of little within the first
	len characters of big, or NULL if no match is found.

*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len
			&& little[j] && big[i + j])
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
