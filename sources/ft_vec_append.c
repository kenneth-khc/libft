/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:29:49 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/13 17:37:13 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include "libft.h"
#include <stdlib.h>

static struct s_vec	*resize(struct s_vec *vec);

void	*ft_vec_append(void *data, void *new_ele)
{
	struct s_vec	*vec;
	void			*dst;

	vec = vec_of(data);
	if (vec->elem_cnt >= vec->capacity)
	{
		vec = resize(vec);
	}
	dst = vec->data + (vec->elem_sz * vec->elem_cnt);
	ft_memcpy(dst, new_ele, vec->elem_sz);
	vec->elem_cnt++;
	return (vec->data);
}

static size_t	set_new_capacity(struct s_vec *old_vec)
{
	size_t	new_capacity;

	new_capacity = 0;
	if (old_vec->capacity == 0)
	{
		new_capacity = 1;
	}
	else
	{
		new_capacity = old_vec->capacity * 2;
	}
	return (new_capacity);
}

static struct s_vec	*resize(struct s_vec *vec)
{
	struct s_vec	*old_vec;
	size_t			new_cap;
	struct s_vec	*new_vec;
	size_t			old_buffer_size;

	old_vec = vec;
	old_buffer_size = old_vec->elem_cnt * old_vec->elem_sz;
	new_cap = set_new_capacity(old_vec);
	new_vec = malloc(sizeof (*new_vec) + old_vec->elem_sz * new_cap);
	if (new_vec == NULL)
	{
		return (NULL);
	}
	new_vec->elem_sz = old_vec->elem_sz;
	new_vec->elem_cnt = old_vec->elem_cnt;
	new_vec->capacity = new_cap;
	ft_memcpy(new_vec->data, vec->data, old_buffer_size);
	free(old_vec);
	return (new_vec);
}
