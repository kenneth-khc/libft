/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_internal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:34:12 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/13 17:38:13 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"
#include <stddef.h>

struct s_vec	*vec_of(const void *data)
{
	const size_t	offset = offsetof(struct s_vec, data);
	const void		*alloc_start = data - offset;

	return ((struct s_vec *)alloc_start);
}
