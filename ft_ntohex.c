/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:33:02 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/23 16:26:45 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ntohex(unsigned long nbr, char format, int *counter)
{
	char	ch;
	char	*base;

	base = "0123456789abcdef";
	if (nbr > 16 - 1)
	{
		ft_ntohex(nbr / 16, format, counter);
		ft_ntohex(nbr % 16, format, counter);
	}
	else
	{
		(*counter)++;
		ch = base[nbr];
		if (format == 'X' && ft_isalpha(ch))
			ch -= 32;
		ft_putchar(ch);
	}
	return (*counter);
}
