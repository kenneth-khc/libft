/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_unsafe.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:51:03 by kecheong          #+#    #+#             */
/*   Updated: 2024/07/08 17:55:01 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../includes/libft.h"

char	*ft_strjoin_unsafe(char const *s1, char const *s2)
{
	char	*s3;
	char	*ptr_to_s3;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = 0;
	s2_len = 0;
	if (s1)
		s1_len = ft_strlen(s1);
	if (s2)
		s2_len = ft_strlen(s2);
	s3 = ft_calloc(s1_len + s2_len + 1, sizeof(*s3));
	if (s3 == NULL)
		return (NULL);
	ptr_to_s3 = s3;
	while (s1 && *s1)
		*s3++ = *s1++;
	while (s2 && *s2)
		*s3++ = *s2++;
	return (ptr_to_s3);
}
