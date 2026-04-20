/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:25:47 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/13 17:29:15 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VEC_H
# define FT_VEC_H

# include <stddef.h>

typedef void(*function)(void*);

typedef struct s_vec
{
	size_t		elem_sz; // size of each element
	size_t		elem_cnt; // how many elements there are
	size_t		capacity; // how many elements the current allocation can hold
	function	destructor;
	char		data[]; // flexible array member holding the elements
}	t_vec;

// Public interface

void	*ft_vec_init(size_t elem_size);
void	*ft_vec_init_with(int elem_count, size_t elem_size);
size_t	ft_vec_len(const void *data);
void	*ft_vec_append(void *data, void *new_ele);
void	ft_vec_pop(void *data);
void	ft_vec_set_destructor(void *data, function destructor);
void	ft_vec_free(void *data);

// Private interface

t_vec	*vec_of(const void *data);

#endif
