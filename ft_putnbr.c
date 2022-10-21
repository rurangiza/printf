/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:32:11 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 18:13:35 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Outputs integer {nbr} to the given file descriptor {fd}
*/

#include "libftprintf.h"

void	ft_putnbr_fd(int nbr)
{
	char	ch;

	if (nbr > 9)
	{
		ft_putnbr_fd((nbr / 10));
		ft_putnbr_fd((nbr % 10));
	}
	else if (nbr == INT_MIN)
	{
		ft_putstr_fd("-2147483648");
	}
	else if (nbr < 0)
	{
		ft_putchar_fd('-');
		nbr = -nbr;
		ft_putnbr_fd(nbr);
	}
	else if (nbr >= 0 && nbr < 10)
	{
		ch = nbr + '0';
		ft_putchar_fd(ch);
	}
}
