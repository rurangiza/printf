/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:32:11 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/23 14:05:45 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Outputs integer {nbr} to the given file descriptor {fd}
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
		ft_putchar('-');
		nbr = -nbr;
		ft_putnbr(nbr, counter);
	}
	else if (nbr >= 0 && nbr < 10)
	{
		(*counter)++;
		ch = nbr + '0';
		ft_putchar(ch);
	}
	return (*counter);
}
