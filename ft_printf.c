/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:49:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 18:13:57 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	// Length of str
	va_list args;
	int	i;
	
	// Invoke va_list
	va_start(args, str);
	// Access the arguments one at a time
	i = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			print_variables(str[i + 1], args);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (1);
}

void	print_variables(char ch, va_list args)
{
	
	if (ch == 'c')
	{
		// Do this
	}
	else if (ch == 's')
	{
		// Do this
	}
	else if (ch == 'd' || ch == 'i')
		ft_putnbr(va_arg(args, int));
	else if (ch == '%' && ch == 'u')
	{
		// Do this
	}
}

int main(void)
{
	ft_printf("I want %d apples\n", 5);
	return (0);
}

// Iterate in {str} looking for '%' symbol
	// found %
		// Check follows character
			// if it's : %c, %s, %i %d, %u, %%, %x, %X ou %p
				// Include content in string
			// if no such letters
				// just print string
	// not found
		// Print string