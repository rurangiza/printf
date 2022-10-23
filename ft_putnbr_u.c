/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:50:24 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 20:09:14 by Arsene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nbr)
{
	char			ch;
	
	if (nbr > 9)
	{
		ft_putnbr((nbr / 10));
		ft_putnbr((nbr % 10));
	}
	else if (nbr >= 0 && nbr < 10)
	{
		ch = nbr + '0';
		ft_putchar(ch);
	}
	return (ft_nbrlen(nbr));
}