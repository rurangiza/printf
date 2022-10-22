/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:50:24 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 12:06:27 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_u(unsigned int nbr)
{
	char			ch;
	
	if (nbr > 9)
	{
		ft_putnbr((nbr / 10));
		ft_putnbr((nbr % 10));
	}
	else if (nbr == INT_MIN)
	{
		ft_putstr("-2147483648");
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		ft_putnbr(nbr);
	}
	else if (nbr >= 0 && nbr < 10)
	{
		ch = nbr + '0';
		ft_putchar(ch);
	}
}