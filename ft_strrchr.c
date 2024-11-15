/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:03:30 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:23:19 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strrchr function searches for the last occurrence of the character
	c in the string s. It scans the string from the end to the beginning.
	If the character is found, it returns a pointer to that last occurrence.
	If the character is not found, it returns NULL.

	RETURN VALUE :
	It returns a pointer to the last occurrence of the character c in the
	string s, or NULL if the character is not found.

*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
