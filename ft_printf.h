/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:44:55 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/23 14:11:39 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr, int *counter);
int		ft_putnbr_u(unsigned int nbr, int *counter);
int		ft_putnbr_base_u(unsigned long nbr, char *base, int *counter);
int		ft_nbrlen(int nbr);

#endif