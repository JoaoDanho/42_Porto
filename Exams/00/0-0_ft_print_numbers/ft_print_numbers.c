/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafranc <joafranc@student42.porto>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:49:57 by joafranc          #+#    #+#             */
/*   Updated: 2024/09/10 15:38:30 by joafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_numbers(void)
{
    char nb;

    nb = '0';
    while (nb <= '9')
    {
        write(1, &nb, 1);
        nb++;
    }
}
