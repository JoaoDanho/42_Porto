/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafranc <joafranc@student42.porto>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:49:57 by joafranc          #+#    #+#             */
/*   Updated: 2024/09/08 15:38:30 by joafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_two_digit_number(int number)
{
	if (number < 10)
	{
		ft_putchar('0');
		ft_putchar(number + '0');
	}
	else
	{
		ft_putchar(number / 10 + '0');
		ft_putchar(number % 10 + '0');
	}
}

void	print_two_numbers(int first, int second)
{
	print_two_digit_number(first);
	ft_putchar(' ');
	print_two_digit_number(second);
	if (first != 98 || second != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			print_two_numbers(first, second);
			second++;
		}
		first++;
	}
}
