/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:30:53 by hlindeza          #+#    #+#             */
/*   Updated: 2023/04/15 11:53:51 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, long int *chr_total)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", chr_total);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', chr_total);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, chr_total);
		ft_putnbr(nbr % 10, chr_total);
	}
	else
		ft_putchar(nbr + '0', chr_total);
}
