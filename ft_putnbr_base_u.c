/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:33:02 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 17:17:11 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long	condition(char *base, unsigned long i);
static unsigned long	no_error(char *base);

void	ft_putnbr_base_u(unsigned long nbr, char *base, int *counter)
{
	char	ch;
	unsigned long	base_len;

	base_len = ft_strlen(base);
	if (no_error(base))
	{
		if (nbr > base_len - 1)
		{
			ft_putnbr_base_u(nbr / base_len, base);
			ft_putnbr_base_u(nbr % base_len, base);
		}
		else
		{
			*counter++;
			ch = base[nbr];
			write(1, &ch, 1);
		}
	}
}

static unsigned long	no_error(char *base)
{
	unsigned long	i;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
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

static unsigned long	condition(char *base, unsigned long i)
{
	unsigned long	j;

	j = 0;
	while (base[j])
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
