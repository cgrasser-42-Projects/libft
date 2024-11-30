/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:55:37 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:21:52 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strchr function searches for the first occurrence of the character c
	in the string s. If the character is found, it returns a pointer to that
	occurrence in the string. If the character is not found, it returns NULL.

	RETURN VALUE :
	It returns a pointer to the first occurrence of the character c in the
	string s, or NULL if the character is not found.

*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			break ;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
