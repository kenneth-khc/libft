/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_startswith.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 00:04:24 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/09 00:09:00 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include "libft.h"

bool	ft_str_startswith(const char *str, const char *prefix)
{
	size_t	str_len;
	size_t	prefix_len;

	str_len = ft_strlen(str);
	prefix_len = ft_strlen(prefix);
	if (str && prefix && str_len >= prefix_len)
	{
		while (*str != '\0' && *str == *prefix)
		{
			str++;
			prefix++;
		}
		if (*prefix == '\0')
		{
			return (true);
		}
	}
	return (false);
}
