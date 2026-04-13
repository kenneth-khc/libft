/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 16:15:06 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/13 17:37:43 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_vec.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

void	*ft_vec_init(size_t elem_size)
{
	struct s_vec	*vec;

	vec = malloc(sizeof (*vec));
	if (vec == NULL)
	{
		return (NULL);
	}
	vec->elem_sz = elem_size;
	vec->elem_cnt = 0;
	vec->capacity = 0;
	return (vec->data);
}

void	*ft_vec_init_with(int elem_count, size_t elem_size)
{
	struct s_vec	*vec;

	vec = malloc(sizeof (*vec) + (elem_count * elem_size));
	if (vec == NULL)
	{
		return (NULL);
	}
	vec->elem_cnt = 0;
	vec->elem_sz = elem_size;
	vec->capacity = elem_count;
	return (vec->data);
}
