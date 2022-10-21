/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:54:34 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 19:04:34 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	condition(char *base, size_t i);
size_t	no_error(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	char	ch;
	size_t	l_nbr;
	size_t	base_len;

	l_nbr = nbr;
	base_len = ft_strlen(base);
	if (no_error(base))
	{
		if (l_nbr < 0)
		{
			write(1, "-", 1);
			l_nbr = l_nbr * (-1);
		}
		if (l_nbr > base_len - 1)
		{
			ft_putnbr_base(l_nbr / base_len, base);
			ft_putnbr_base(l_nbr % base_len, base);
		}
		else if (l_nbr >= 0 && l_nbr < base_len)
		{
			ch = base[l_nbr];
			write(1, &ch, 1);
		}
	}
}

// Check for input errors: returns 1 if there is no error, and 0 otherwise
size_t	no_error(char *base)
{
	size_t	i;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (condition(base, i) == 0)
			return (0);
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}

size_t	condition(char *base, size_t i)
{
	long	j;

	j = 0;
	while (base[j] != '\0')
	{
		if ((i != j) && (base[i] == base[j]))
		{
			return (0);
			break ;
		}
		j++;
	}
	return (1);
}