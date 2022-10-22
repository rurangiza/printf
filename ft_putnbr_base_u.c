/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:33:02 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 14:33:36 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	condition(char *base, unsigned long long i);
static unsigned long long	no_error(char *base);

void	ft_putnbr_base_u(unsigned long long l_nbr, char *base)
{
	char	ch;
	unsigned long long	base_len;

	base_len = (unsigned long long)ft_strlen(base);
	if (no_error(base))
	{
		if (l_nbr > base_len - 1)
		{
			ft_putnbr_base_u(l_nbr / base_len, base);
			ft_putnbr_base_u(l_nbr % base_len, base);
		}
		else
		{
			ch = base[l_nbr];
			write(1, &ch, 1);
		}
	}
}

static unsigned long long	no_error(char *base)
{
	unsigned long long	i;

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

static unsigned long long	condition(char *base, unsigned long long i)
{
	unsigned long long	j;

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
