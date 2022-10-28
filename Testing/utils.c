/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:03:12 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/28 13:22:38 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest_printf.h"

// Colors
//BGreen='\033[1;32m';
//RCol='\033[0m';

// Func
void	title(char *str)
{
	printf(
		"\n\033[1;32m> %s\033[0m\n",
		str
	);
}

// INTEGERS
void	test_integer(void)
{
	int test1 = 893;
	int test2 = 263451;
	int test3 = INT_MIN;
	int test4 = INT_MAX;
	int test5 = 00000000000000000002;
	title("MINE");
	ft_printf(
		"\nNumber  : %d\nBigger  : %d\nINT_MIN : %d\nINT_MAX : %d\nLONG    : %d\n",
		test1, test2, test3, test4, test5
	);
	title("ORIGINAL");
	printf(
		"\nNumber  : %d\nBigger  : %d\nINT_MIN : %d\nINT_MAX : %d\nLONG    : %d\n",
		test1, test2, test3, test4, test5
	);
}

// STRINGS
void	test_strings(void)
{
	string s1 = "Hello, world";
	string s2 = "4545654";
	string s3 = "";
	string s4 = NULL;
	title("MINE");
	ft_printf(
		"\n%s\n%s\n%s\n%s\n",
		s1, s2, s3, s4
	);
	title("ORIGINAL");
	printf(
		"\n%s\n%s\n%s\n%s\n",
		s1, s2, s3, s4
	);
}

// CHARACTERS
void	test_characters(void)
{
	int	i = -10;
	title("MINE");
	while (i < 800)
		ft_printf("%c", i++);
	ft_printf("\n");
	title("ORIGINAL");
	i = -10;
	while (i < 800)
		printf("%c", i++);
	printf("\n");
}

// UNSIGNED DECIMAL AND INTEGERS
void	test_unsigned_decimal(void)
{
	unsigned int n1 = -1;
	title("MINE");
	ft_printf("%u\n", n1);
	title("ORIGINAL");
	printf("%u\n", n1);
}

// HEXADECIMAL
void	test_itohex(int nbr)
{
	int	number = nbr;
	
	ft_printf("%d\n", number);
	
	title("MINE");
	ft_printf("  %x - %X\n", number, number);
	
	title("ORIGINAL");
	printf("  %x - %X\n", number, number);
}