/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:32:11 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/23 06:07:59 by Arsene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Outputs integer {nbr} to the given file descriptor {fd}
*/

#include "ft_printf.h"

int	ft_putnbr(int nbr)
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
	return (ft_nbrlen(nbr));
}