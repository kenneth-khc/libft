/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:32:47 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/13 17:38:02 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

size_t	ft_vec_len(const void *data)
{
	const struct s_vec	*vec = vec_of(data);

	return (vec->elem_cnt);
}
