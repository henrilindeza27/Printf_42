/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlindeza <hlindeza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:24:57 by hlindeza          #+#    #+#             */
/*   Updated: 2023/04/15 00:04:59 by hlindeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, long int *chr_total)
{
	int	i;

	i = -1;
	if (!str)
	{
		ft_putstr("(null)", chr_total);
		return ;
	}
	while (str[++i])
		ft_putchar(str[i], chr_total);
}
