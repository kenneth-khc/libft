/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:04:38 by kecheong          #+#    #+#             */
/*   Updated: 2024/03/30 23:33:19 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Reverses an integer.
 * E.g.
 * 123 -> 321
 * 100 -> 1
 * -543 -> -345
 * -9720 -> -279
 */
int	ft_reverse_int(int num)
{
	int		reversed;
	bool	is_negative;

	reversed = 0;
	is_negative = num < 0;
	if (is_negative)
		num = -num;
	while (num > 0)
	{
		reversed = (reversed * 10) + (num % 10);
		num /= 10;
	}
	if (is_negative)
		return (-reversed);
	else
		return (reversed);
}
