/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:49:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 17:32:34 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

// va_start, va_arg, va_end

int	ft_printf(const char *, ...)
{
	// if %c, replace with char variable
	// if %s, replace with string variable 
	// if %p, replace with 
	va_list args;

	va_start(args, *);
}
// What are variadic functions?
// How can I print a single character -> {%c}

int main(void)
{ 
	//ft_printf("", a, h);
	int a = 42;
	int *ptr = &a;
	printf("%p\n", ptr);
	return (0);
}