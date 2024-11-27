/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:07:43 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/27 19:08:25 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_recur_base(unsigned long int nb, char *base, int base_len)
{
	if (nb >= (unsigned long int)base_len)
	{
		ft_putnbr_recur_base(nb / base_len, base, base_len);
		ft_putnbr_recur_base(nb % base_len, base, base_len);
	}
	else
		ft_putchar_fd(base[nb], 1);
}

void	ft_putnbr_base(unsigned long int nb, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	ft_putnbr_recur_base(nb, base, base_len);
}
