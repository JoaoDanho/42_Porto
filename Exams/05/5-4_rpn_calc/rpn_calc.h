/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafranc <joafranc@student42.porto>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:49:57 by joafranc          #+#    #+#             */
/*   Updated: 2024/09/10 15:38:30 by joafranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CALC_H
# define RPN_CALC_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_s
{
	int			i;
	struct s_s	*next;
}				t_s;

int		check_input(char *s);

void	rpn_calc(char *s);
void	push(t_s **stack, int i);
int		pop(t_s **stack);
int		do_op(int i, int j, char o);

int		is_op(int c);
int		is_digit(int c);
int		is_space(int c);

#endif
