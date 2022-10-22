/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:04:13 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/22 13:48:49 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Outputs the character {c} to the given file descriptor {fd}
*/

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
