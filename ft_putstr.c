/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:15:53 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 18:17:09 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Outputs the string {str} to the given file descriptor {fd}
*/

#include "libftprintf.h"

void	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i]);
		i++;
	}
}
