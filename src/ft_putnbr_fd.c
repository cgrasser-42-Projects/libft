/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:48 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:17:06 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_putnbr_fd function writes the integer n to the given file descriptor
	fd. It handles the special case of -2147483648, then recursively outputs the
	digits of n using ft_putnbr_recur. If n is negative, a minus sign is
	printed before the digits.

	RETURN VALUE :
	This function does not return a value.

*/

static void	ft_putnbr_recur(int n, int fd)
{
	if (n >= 10)
	{
		ft_putnbr_recur(n / 10, fd);
		ft_putnbr_recur(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		ft_putnbr_recur(n, fd);
	}
}
