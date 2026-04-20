/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_panic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 20:06:18 by kecheong          #+#    #+#             */
/*   Updated: 2026/04/06 20:37:19 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void	ft_panic(int status, const char *format, ...)
{
	va_list	args;

	if (format)
	{
		va_start(args, format);
		ft_vdprintf(STDERR_FILENO, format, args);
		va_end(args);
	}
	exit(status);
}
