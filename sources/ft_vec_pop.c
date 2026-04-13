/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:33:16 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/13 17:33:19 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

void	ft_vec_pop(void *data)
{
	struct s_vec	*vec;

	vec = vec_of(data);
	if (vec->elem_sz == 0)
	{
		return ;
	}
	vec->elem_cnt--;
}
