/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:12:39 by hlindeza          #+#    #+#             */
/*   Updated: 2023/04/15 13:15:55 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd(unsigned long int nbr, long int *chr_total, int x)
{
	if (!nbr)
	{
		ft_putstr("(nil)", chr_total);
		return ;
	}
	if (x == 0)
		ft_putstr("0x", chr_total);
	if (nbr >= 16)
		ft_putadd((nbr / 16), chr_total, ++x);
	ft_putchar(HEX_LOWER[nbr % 16], chr_total);
}
