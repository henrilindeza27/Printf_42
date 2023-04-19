/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:25:10 by hlindeza          #+#    #+#             */
/*   Updated: 2023/04/15 13:17:28 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int nbr, long int *chr_total, int loworup)
{
	if (nbr >= 16)
		ft_puthexa(nbr / 16, chr_total, loworup);
	if (loworup)
		ft_putchar(HEX_UPPER[nbr % 16], chr_total);
	else
		ft_putchar(HEX_LOWER[nbr % 16], chr_total);
}
