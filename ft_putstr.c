/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:15:53 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 17:01:52 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Outputs the string {str} to the given file descriptor {fd}
*/

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
