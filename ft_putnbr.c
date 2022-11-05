/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:32:11 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/05 13:39:41 by Arsene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Prints integer {nbr} to standard output
*/

#include "ft_printf.h"

int	ft_putnbr(int nbr, int *counter)
{
	char	ch;

	if (nbr > 9)
	{
		ft_putnbr((nbr / 10), counter);
		ft_putnbr((nbr % 10), counter);
	}
	else if (nbr == INT_MIN)
	{
		return (ft_putstr("-2147483648") + *counter);
	}
	else if (nbr < 0)
	{
		(*counter)++;
		write(1, "-", 1);
		nbr = -nbr;
		ft_putnbr(nbr, counter);
	}
	else if (nbr >= 0 && nbr < 10)
	{
		(*counter)++;
		ch = nbr + '0';
		write(1, &ch, 1);
	}
	return (*counter);
}
