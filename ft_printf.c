/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:49:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/28 13:56:06 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Prints string to standard output and handles basic format specifiers
*/

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		index;
	int		counter;

	counter = 0;
	va_start(args, str);
	index = 0;
	while (str[index])
	{
		if (str[index] == '%')
		{
			ft_putfs(str[index + 1], args, &counter);
			index++;
		}
		else
		{
			ft_putchar(str[index]);
			counter++;
		}
		index++;
	}
	va_end(args);
	return (counter);
}
