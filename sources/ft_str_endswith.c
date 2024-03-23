/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_endswith.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 04:54:20 by kecheong          #+#    #+#             */
/*   Updated: 2024/03/24 05:01:35 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

bool	ft_str_endswith(const char *str, const char *suffix)
{
	size_t	str_len;
	size_t	suffix_len;
	char	*start;

	str_len = ft_strlen(str);
	suffix_len = ft_strlen(suffix);
	if (str && suffix && str_len >= suffix_len)
	{
		start = (char *) str + (str_len - suffix_len);
		while (*start != '\0' && *start == *suffix)
		{
			start++;
			suffix++;
		}
		if (*suffix == '\0')
			return (true);
	}
	return (false);
}