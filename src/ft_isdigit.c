/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:21:51 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 15:48:11 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	DESCRIPTION:
	The ft_isdigit function checks if the passed character is
	a digit (from '0' to '9').

	RETURN VALUE:
	It returns 1 if the character is a digit, and 0 otherwise.

*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
