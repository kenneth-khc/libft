/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:17:28 by kecheong          #+#    #+#             */
/*   Updated: 2024/03/30 23:32:20 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of digits in a decimal number.
 * E.g.
 * 145 returns 3
 * -90123 returns 5
 */
int	ft_count_digits(int num)
{
	int	count;

	if (num == 0)
		return (1);
	if (num < 0)
		num = -num;
	count = 0;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
