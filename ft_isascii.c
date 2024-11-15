/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:36:33 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 17:56:54 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	DESCRIPTION:
	The ft_isascii function checks if the passed character is an ASCII
	character, meaning its value is between 0 and 127 (inclusive).

	RETURN VALUE:
	It returns 1 if the character is an ASCII character, and 0 otherwise.

*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
