/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:37:35 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/23 20:48:06 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include "libft.h"

void	ft_vec_pop_front(void *data)
{
	struct s_vec	*vec;
	size_t			i;
	size_t			offset;
	size_t			next_offset;

	vec = vec_of(data);
	if (vec->elem_cnt == 0)
	{
		return ;
	}
	if (vec->destructor)
	{
		vec->destructor(&vec->data[0]);
	}
	i = 0;
	vec->elem_cnt--;
	while (i < vec->elem_cnt)
	{
		offset = i * vec->elem_sz;
		next_offset = (i + 1) * vec->elem_sz;
		ft_memcpy(&vec->data[offset], &vec->data[next_offset], vec->elem_sz);
		i++;
	}
}
