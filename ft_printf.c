/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:49:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 17:20:09 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_variables(char ch, va_list args);

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	i;
	int counter;
	
	counter = 0;
	va_start(args, str);
	i = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			print_variables(str[i + 1], args, &counter);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (i);
}

int	print_variables(char ch, va_list args, int *counter)
{
	if (ch == 'c')
		counter = ft_putchar(va_arg(args, int));
	else if (ch == 's')
		counter = ft_putstr(va_arg(args, char *));
	else if (ch == 'i' || ch == 'd')
		counter = ft_putnbr(va_arg(args, int));
	else if (ch == 'u')
		counter = ft_putnbr_u(va_arg(args, unsigned int));
	else if (ch == '%')
		counter = ft_putchar('%');
	else if (ch == 'x')
		ft_putnbr_base_u(va_arg(args, unsigned int), "0123456789abcdef", &counter);
	else if (ch == 'X')
		ft_putnbr_base_u(va_arg(args, unsigned int), "0123456789ABCDEF", &counter);
	else if (ch == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base_u(va_arg(args, unsigned long), "0123456789abcdef", &counter);
		counter += 2;
	}
	return (counter);
}

// #include <stdio.h>
// int main(void)
// {
// 	int a = 45;
// 	//ft_printf("ft_print : %p\n", &a);
// 	ft_printf("This is %s\n","Arsene");
// 	return (0);
// }
