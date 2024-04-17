/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:32:23 by kecheong          #+#    #+#             */
/*   Updated: 2024/04/17 19:44:24 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compares two null terminated strings and return its lexical difference */
int	ft_strcmp(const char *p1, const char *p2)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (const unsigned char *)p1;
	s2 = (const unsigned char *)p2;
	while (*s1 == *s2
		&& *s1 != '\0'
		&& *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
