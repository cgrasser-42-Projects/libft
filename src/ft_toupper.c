/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:38:57 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:15:59 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	DESCRIPTION :
	The ft_toupper function takes a character as input and converts it to
	uppercase if it is a lowercase letter (between ASCII codes 97 and 122).
	If the character is not a lowercase letter, it is returned unchanged.

	RETURN VALUE :
	It returns the character converted to uppercase if it was a lowercase letter,
	or the original character otherwise.

*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
