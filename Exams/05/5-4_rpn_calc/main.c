/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafranc <joafranc@student42.porto>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:49:57 by joafranc          #+#    #+#             */
/*   Updated: 2024/09/10 15:38:30 by joafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

int	main(int ac, char **av)
{
	if (ac == 2 && check_input(av[1]))
		rpn_calc(av[1]);
	else
		printf("Error\n");
	return (0);
}
