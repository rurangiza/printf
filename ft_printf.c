/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:49:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/23 09:20:45 by Arsene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void print_variables(char ch, va_list args, int *counter);

int ft_printf(const char *str, ...)
{
	va_list args;
	int i;
	int counter;

	counter = 0;
	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_variables(str[i + 1], args, &counter);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}

static void print_variables(char ch, va_list args, int *counter)
{
	if (ch == 'c')
		*counter += ft_putchar(va_arg(args, int));
	else if (ch == 's')
		*counter += ft_putstr(va_arg(args, char *));
	else if (ch == 'i' || ch == 'd')
		*counter += ft_putnbr(va_arg(args, int));
	else if (ch == 'u')
		*counter += ft_putnbr_u(va_arg(args, unsigned int));
	else if (ch == '%')
		*counter += ft_putchar('%');
	else if (ch == 'x')
		*counter += ft_putnbr_base_u(va_arg(args, unsigned int), "0123456789abcdef");
	else if (ch == 'X')
		*counter += ft_putnbr_base_u(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (ch == 'p')
	{
		ft_putstr("0x");
		*counter += ft_putnbr_base_u(va_arg(args, unsigned long), "0123456789abcdef");
	}
}

#include <stdio.h>
int main(void)
{
	int a = 11;
	printf(
		"\nLen = %d\n\n",
		ft_printf("\nHi, %s my name is %x\n", "Arsene", a)
	);
	printf(
		"\nLen = %d\n\n",
		printf("\nHi, %s my name is %x\n", "Arsene", a)
	);
	return (0);
}
