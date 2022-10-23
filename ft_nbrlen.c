/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:03:10 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/23 13:51:33 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Find length of a number
*/

int	ft_nbrlen(int nbr)
{
	int	counter;

	counter = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		counter++;
	while (nbr != 0)
	{
		counter++;
		nbr = nbr / 10;
	}	
	return (counter);
}
