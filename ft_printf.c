/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:49:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/23 16:25:01 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

static void	print_variables(char ch, va_list args, int *counter);

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
			print_variables(str[index + 1], args, &counter);
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

static void	print_variables(char ch, va_list args, int *counter)
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
		ft_ntohex(va_arg(args, unsigned int), ch, counter);
	else if (ch == 'p')
	{
		ft_putstr("0x");
		ft_ntohex(va_arg(args, unsigned long), ch, counter);
		*counter += 2;
	}
}

// int main(void)
// {
// 	//int a = 11;
// 	printf(
// 		"\nLen = %d\n\n",
// 		ft_printf("\n%p\n", -1)
// 	);
// 	// printf(
// 	// 	"\nLen = %d\n\n",
// 	// 	printf("\n%p\n", -14556)
// 	// );
// 	return (0);
// }
