/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_set_destructor.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:22:42 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/23 19:44:32 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

void	ft_vec_set_destructor(void *data, t_function destructor)
{
	struct s_vec	*vec;

	vec = vec_of(data);
	vec->destructor = destructor;
}
