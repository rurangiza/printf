/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:17:08 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/28 13:48:39 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Print Format Specifier
*/

#include "ft_printf.h"

void	print_fs(char ch, va_list args, int *counter)
{
	if (ch == 'c')
			*counter += ft_putchar(va_arg(args, int));
	else if (ch == 's')
		*counter += ft_putstr(va_arg(args, char *));
	else if (ch == 'i' || ch == 'd')
		*counter = ft_putnbr(va_arg(args, int), counter);
	else if (ch == 'u')
		*counter = ft_putnbr_u(va_arg(args, unsigned int), counter);
	else if (ch == '%')
		*counter += ft_putchar('%');
	else if (ch == 'x' || ch == 'X')
		ft_puthex(va_arg(args, unsigned int), ch, counter);
	else if (ch == 'p')
	{
		ft_putstr("0x");
		ft_puthex(va_arg(args, unsigned long), ch, counter);
		*counter += 2;
	}
}
