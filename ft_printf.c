/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:49:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 14:20:59 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_variables(char ch, va_list args);

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	i;
	
	va_start(args, str);
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
		ft_putchar(va_arg(args, int));
	else if (ch == 's')
		ft_putstr(va_arg(args, char *));
	else if (ch == 'i' || ch == 'd')
		ft_putnbr(va_arg(args, int));
	else if (ch == 'u')
		ft_putnbr_u(va_arg(args, unsigned int));
	else if (ch == '%')
		ft_putchar('%');
	else if (ch == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef"); // unsigned int
	else if (ch == 'X')
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF"); // unsigned int
	else if (ch == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base_u(va_arg(args, unsigned long long), "0123456789abcdef");
	}
}

#include <stdio.h>
int main(void)
{
	int a = 45;
	ft_printf("ft_print : %p\n", &a);
	printf("printf   : %p\n", &a);
	return (0);
}
