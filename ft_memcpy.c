/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:54:34 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/07 11:55:02 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		((char*)dest)[i] = ((const char*)src)[i];
		++i;
	}
	return (dest);
}
