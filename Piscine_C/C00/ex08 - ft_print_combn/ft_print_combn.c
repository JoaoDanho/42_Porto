/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafranc <joafranc@student42.porto>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:49:57 by joafranc          #+#    #+#             */
/*   Updated: 2024/09/08 15:38:30 by joafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int digits[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(digits[i] + '0');
		i++;
	}
	if (digits[0] != 9 - n + 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int pos, int digits[], int n, int prev)
{
	int	i;

	if (pos == n)
	{
		return ;
	}
	i = prev + 1;
	while (i <= 9)
	{
		digits[pos] = i;
		ft_print_combn_recursive(pos + 1, digits, n, digits[pos]);
		if (pos == n - 1)
		{
			print_number(digits, n);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[10];

	ft_print_combn_recursive(0, digits, n, -1);
}
