/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:44:55 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 14:15:11 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putnbr_u(unsigned int nbr);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_base_u(unsigned long long nbr, char *base);
void	ft_putstr(char *str);

#endif