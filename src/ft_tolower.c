/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:49:33 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:18:09 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	DESCRIPTION :
	The ft_tolower function takes a character as input and converts it to
	lowercase if it is an uppercase letter (between ASCII codes 65 and 90).
	If the character is not an uppercase letter, it is returned unchanged.

	RETURN VALUE :
	It returns the character converted to lowercase if it was an uppercase
	letter, or the original character otherwise.

*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
