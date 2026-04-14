/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_set_destructor.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:22:42 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/14 19:23:43 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

typedef void (*function)(void*);

void	ft_vec_set_destructor(void *data, function destructor)
{
	struct s_vec	*vec;

	vec = vec_of(data);
	vec->destructor = destructor;
}
