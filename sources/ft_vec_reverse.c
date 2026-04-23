/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:01:26 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/23 19:42:22 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include "libft.h"
#include <stdlib.h>

void	swap_elements(struct s_vec *vec, size_t low, size_t high, char *buf)
{
	size_t		l_offset;
	size_t		h_offset;

	l_offset = low * vec->elem_sz;
	h_offset = high * vec->elem_sz;
	ft_memcpy(buf, &vec->data[l_offset], vec->elem_sz);
	ft_memcpy(&vec->data[l_offset], &vec->data[h_offset], vec->elem_sz);
	ft_memcpy(&vec->data[h_offset], buf, vec->elem_sz);
}

void	ft_vec_reverse(void *data)
{
	size_t			low;
	size_t			high;
	struct s_vec	*vec;
	char			*buf;

	vec = vec_of(data);
	if (vec->elem_cnt <= 1)
	{
		return ;
	}
	low = 0;
	high = vec->elem_cnt - 1;
	buf = malloc(vec->elem_sz);
	if (buf == NULL)
	{
		return ;
	}
	while (low < high && high > low)
	{
		swap_elements(vec, low, high, buf);
		low++;
		high--;
	}
	free(buf);
	return ;
}
