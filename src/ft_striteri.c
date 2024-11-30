/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:39:41 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:10:07 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	DESCRIPTION :
	The ft_striteri function iterates over the string s and applies the function
	f to each character of s, passing the index and the address of each
	character as arguments. Unlike ft_strmapi, which creates a new string,
	ft_striteri modifies the string s in place.

	RETURN VALUE :
	This function does not return a value.

*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
