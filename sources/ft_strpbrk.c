/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:18:30 by kecheong          #+#    #+#             */
/*   Updated: 2024/07/09 20:02:14 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

/**
 * Finds the first occurrence of character in s1 that matches any
 * character of the condition passed in
 * Returns NULL if no matches found or a NULL is passed in
**/
char	*ft_strpbrk(const char *s1, bool (*condition)(char c))
{
	if (s1 == NULL || condition == NULL)
		return (NULL);
	while (*s1)
	{
		if (condition(*s1))
			return ((char *)s1);
		s1++;
	}
	if (condition(*s1))
		return ((char *)s1);
	return (NULL);
}
