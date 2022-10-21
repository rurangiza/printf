/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:49:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 19:06:39 by arurangi         ###   ########.fr       */
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
	
	if (ch == 'c') // Prints a single character
		ft_putchar(va_arg(args, char));
	else if (ch == 's') // Prints a string (as defined by the common C convention)
		ft_putstr(va_arg(args, char *));
	else if (ch == 'i' || ch == 'd') // Prints an integer {i} or decimal {d} in base 10
		ft_putnbr(va_arg(args, int));
	else if (ch == 'u') // Prints an unsigned decimal (base 10) number
		ft_putnbr(va_arg(args, unsigned int));
	else if (ch == '%') // Prints a percent sign
		ft_putchar('%');
	else if (ch == 'x') // Prints a number in hexadecimal (base 16) lowercase format
		ft_putnbr_base(va_arg(args, int));
	else if (ch == 'X') // Prints a number in hexadecimal (base 16) uppercase format
	else if (ch == 'p') // Print address of variable
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