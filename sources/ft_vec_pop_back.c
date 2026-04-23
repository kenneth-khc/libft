/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:27:21 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/23 20:32:06 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

void	ft_vec_pop_back(void *data)
{
	struct s_vec	*vec;
	size_t			offset;

	vec = vec_of(data);
	if (vec->elem_cnt == 0)
	{
		return ;
	}
	offset = vec->elem_sz * vec->elem_cnt;
	if (vec->destructor)
	{
		vec->destructor(vec->data + offset);
	}
	vec->elem_cnt--;
}
