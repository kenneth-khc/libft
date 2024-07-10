/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_multiple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:58:21 by kecheong          #+#    #+#             */
/*   Updated: 2024/07/09 16:22:22 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>
#include "libft.h"

/**
 * Calls ft_strlen on a variable list of arguments.
 * Count should be the number of strings passed in.
 * Skips over NULL pointers.
**/
size_t	ft_strlen_multiple(int count, ...)
{
	va_list	ap;
	char	*str;
	size_t	total_len;

	total_len = 0;
	va_start(ap, count);
	while (count > 0)
	{
		str = va_arg(ap, char *);
		if (str)
			total_len += ft_strlen(str);
		count--;
	}
	va_end(ap);
	return (total_len);
}

/**
 * Calls ft_strlen on strings in a variable argument list.
 * A copy of the va_list is made so that the caller's is not affected.
 * Skips over NULL pointers.
**/
size_t	ft_va_strlen(int count, va_list ap)
{
	va_list	ap2;
	char	*str;
	size_t	total_len;

	total_len = 0;
	va_copy(ap2, ap);
	while (count > 0)
	{
		str = va_arg(ap2, char *);
		if (str)
			total_len += ft_strlen(str);
		count--;
	}
	va_end(ap2);
	return (total_len);
}
