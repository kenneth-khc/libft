/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:33:42 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/13 17:33:45 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include <stdlib.h>

/**
	Deallocates the elements within the vec by calling the user's provided
	destructor, as we can't know whether the elements and/or its fields are
	stack allocated or heap allocated. Then, free the entire vector.
**/
void	ft_vec_free(void *data)
{
	size_t			i;
	char			*addr;
	size_t			offset;
	struct s_vec	*vec = vec_of(data);

	i = 0;
	if (vec->destructor)
	{
		while (i < vec->elem_cnt)
		{
			offset = i * vec->elem_sz;
			addr = (vec->data + offset);
			vec->destructor(addr);
			i++;
		}
	}
	free(vec);
}
