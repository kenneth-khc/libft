/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_multiple.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:28:11 by kecheong          #+#    #+#             */
/*   Updated: 2024/07/09 19:56:46 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>
#include "libft.h"

/**
* Joins multiple strings together in order.
* Returns a malloc'd array of the result.
* Count should be the number of strings to be joined and passed in.
* Skips over NULL pointers.
* Caller is responsible for freeing all the strings.
**/
char	*ft_strjoin_multiple(int count, ...)
{
	va_list	ap;
	char	*joined;
	size_t	total_len;
	char	*str;
	char	*p;

	total_len = 0;
	va_start(ap, count);
	total_len = ft_va_strlen(count, ap);
	joined = callocpromax(total_len + 1, sizeof(char));
	if (joined == NULL)
		return (NULL);
	p = joined;
	while (count > 0)
	{
		str = va_arg(ap, char *);
		while (str && *str)
			*p++ = *str++;
		count--;
	}
	va_end(ap);
	return (joined);
}
