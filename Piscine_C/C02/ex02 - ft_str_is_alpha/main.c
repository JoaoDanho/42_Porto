/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafranc <joafranc@student42.porto>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:49:57 by joafranc          #+#    #+#             */
/*   Updated: 2024/09/15 19:50:30 by joafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_str_is_alpha(char *src);

int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"SUCCESS":"FAIL",
			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZfdjbdgjgdbjgbssksfbks")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("1")?"SUCCESS":"FAIL",
			!ft_str_is_alpha(" ")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("\\")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("\n")?"SUCCESS":"FAIL");
}
